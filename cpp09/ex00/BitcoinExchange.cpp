/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:37:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 20:15:58 by brfialho         ###   ########.fr       */
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
	rawDate.erase(rawDate.find(' '), 1);
	date = Date(rawDate, '-');
	ss >> *d;
	if (ss.fail() || !ss.eof())
		throw BitcoinExchange::BitcoinExchangeBadInput();
	if (*d > std::numeric_limits<int>::max())
		throw BitcoinExchange::BitcoinExchangeOverflow();
	if (*d < 0)
		throw BitcoinExchange::BitcoinExchangeNegative();
}

void 	BitcoinExchange::checkBitcoinExchangeValue( const std::string &input )
{
	std::ifstream		f(input.c_str());
	std::string			line;
	Date				date;
	double				value;

	if (!f.is_open()) 
		throw BitcoinExchangeCouldNotOpenFile();
	std::getline(f, line);
	if (line != "date | value")
		throw BitcoinExchangeInvalidFile();

	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	while (std::getline(f, line))
	{
		try {
			std::stringstream	ss(line);
			parseLine(ss, date, &value);
			std::cout << date << " => " << value << " = " << value * findBitcoinPrice(date) << '\n';
		}
		catch (BitcoinExchange::BitcoinExchangeBadInput &e) {
			std::cout << "error: " << e.what() << line << '\n';
		}
		catch (std::exception &e) {
			std::cout << "error: " << e.what() << '\n';
		}
	}
}

double	BitcoinExchange::findBitcoinPrice( const Date &date )
{
	std::map<Date, double>::iterator it;

	it = _data.find(date);
	if (it != _data.end())
		return _data[date];
	for (std::map<Date, double>::reverse_iterator rit = _data.rbegin(); rit != _data.rend(); rit++)
		if ((*it).first < date)
			return ((*it).second);
	throw BitcoinExchangeDateTooEarly();
	return 0;
}

const char	*BitcoinExchange::BitcoinExchangeCouldNotOpenFile::what( void ) const throw()
{
	return "btc: could not open file";
}

const char	*BitcoinExchange::BitcoinExchangeInvalidFile::what( void ) const throw()
{
	return "btc: input file must start with 'date | value'";
}

const char	*BitcoinExchange::BitcoinExchangeBadInput::what( void ) const throw()
{
	return "bad input ";
}

const char	*BitcoinExchange::BitcoinExchangeOverflow::what( void ) const throw()
{
	return "value too big";
}

const char	*BitcoinExchange::BitcoinExchangeNegative::what( void ) const throw()
{
	return "negative value";
}

const char	*BitcoinExchange::BitcoinExchangeDateTooEarly::what( void ) const throw()
{
	return "date predates database";
}
