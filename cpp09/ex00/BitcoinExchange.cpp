/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:37:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 17:41:33 by brfialho         ###   ########.fr       */
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
	std::ofstream	f(filename.c_str());
	std::string		line;

	while (std::getline(f, line))
		std::cout << line << '\n';
}
