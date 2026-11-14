#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>

class	BitcoinExchange {

private:
	// static std::map<int, double>	_data;

public:
	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange &other );
	~BitcoinExchange();
	BitcoinExchange& operator=( const BitcoinExchange &other );

	// void	parseDatabase( const std::string &data );
	// void 	parseInput( const std::string &input );
};

#endif
