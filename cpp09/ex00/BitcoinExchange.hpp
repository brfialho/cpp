#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include "Date.hpp"

class	BitcoinExchange {

private:
	std::map<Date, double>	_data;

public:
	BitcoinExchange();
	BitcoinExchange( const std::string &filename );
	BitcoinExchange( const BitcoinExchange &other );
	~BitcoinExchange();
	BitcoinExchange& operator=( const BitcoinExchange &other );

	void	parseDatabase( const std::string &filename );
	// void 	parseInput( const std::string &input );
};

#endif
