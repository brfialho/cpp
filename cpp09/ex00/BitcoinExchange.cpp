/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:37:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 19:18:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange():
_data()
{}

BitcoinExchange::BitcoinExchange( const std::string &filename ):
_data()
{
	parseDatabase(filename);
}


BitcoinExchange::BitcoinExchange( const BitcoinExchange &other ):
_data(other._data)
{}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this == &other)
		return *this;
	_data = other._data;

	return *this;
}

void	BitcoinExchange::parseDatabase( const std::string &filename )
{
	std::ifstream	f(filename.c_str());
	std::string		line;
	std::string		rawDate;
	double			value;

	std::getline(f, line);
	while (std::getline(f, line))
	{
		std::stringstream	ss(line);
		std::getline(ss, rawDate, ',');
		ss >> value;
		_data.insert(std::make_pair(Date(rawDate, '-'), value));
	}
// 	for (std::map<Date, double>::iterator it = _data.begin(); it != _data.end(); it++)
// 		std::cout << (*it).first << ": " << (*it).second << '\n';
}

static void	parseLine( std::stringstream &ss, Date &date, double *d)
{
	std::string	rawDate;

	if (ss.str().find('|') == std::string::npos)
		throw BitcoinExchange::BitcoinExchangeBadInput();

	std::getline(ss, rawDate, '|');
}

void 	BitcoinExchange::checkBitcoinValue( const std::string &input )
{
	std::stringstream	ss;
	std::ifstream		f(input.c_str());
	std::string			line;
	Date				date;
	double				value;

	if (f.is_open()) 
		throw BitcoinExchangeCouldNotOpenFile();
	std::getline(f, line);
	if (line != "date | value")
		throw BitcoinExchangeInvalidFile();

	while (std::getline(f, line))
	{
		try {
			ss = std::stringstream(line);
			parseLine(ss, date, &value);
			
		}
		catch (BitcoinExchange::BitcoinExchangeBadInput &e) {
			std::cout << e.what() << input << '\n';
		}
		catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}
	}
}
