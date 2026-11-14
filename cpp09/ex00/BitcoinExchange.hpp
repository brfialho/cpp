#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <limits>
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
	void 	checkBitcoinValue( const std::string &input );

	class	IBitcoinExchangeException : public std::exception {
		public:
			const char	*what( void ) const throw() = 0;
	};

	class	BitcoinExchangeCouldNotOpenFile : public IBitcoinExchangeException {
		public:
			const char	*what( void ) const throw();
	};

	class	BitcoinExchangeInvalidFile : public IBitcoinExchangeException {
		public:
			const char	*what( void ) const throw();
	};

	class	BitcoinExchangeBadInput : public IBitcoinExchangeException {
		public:
			const char	*what( void ) const throw();
	};

	class	BitcoinExchangeOverflow : public IBitcoinExchangeException {
		public:
			const char	*what( void ) const throw();
	};

	class	BitcoinExchangeNegative : public IBitcoinExchangeException {
		public:
			const char	*what( void ) const throw();
	};


};

#endif
