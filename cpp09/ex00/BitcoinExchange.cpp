#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &other )
{(void)other;}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this == &other)
		return *this;

	return *this;
}

// void	BitcoinExchange::parseDatabase( const std::string &data )
// {

// }
