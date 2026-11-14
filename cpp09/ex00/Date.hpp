/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:04:44 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 17:07:24 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
# define DATE_HPP

#include <string>
#include <iostream>
#include <sstream>

#define MIN_YEAR 2008
#define MAX_YEAR 2027

#define MIN_MONTH 0
#define MAX_MONTH 12

#define MIN_DAY 0
#define MAX_DAY 31

class	Date {

private:
	long	_year;
	long	_month;
	long	_day;
	char	_separator;

	static void	parseDate( Date &d, const std::string &s );

public:
	Date();
	Date( const std::string &date, char separator );
	Date( const Date &other );
	~Date();
	Date& operator=( const Date &other );

	int	getYear( void ) const;
	int	getMonth( void ) const;
	int	getDay( void ) const;

	void	changeDate( const std::string &newDate );

	bool	operator>( const Date &other ) const;
	bool	operator<( const Date &other ) const;
	bool	operator>=( const Date &other ) const;
	bool	operator<=( const Date &other ) const;
	bool	operator==( const Date &other ) const;
	bool	operator!=( const Date &other ) const;

	class	IDateException : public std::exception	{
		public:
			const char	*what( void ) const throw() = 0;
	};

	class	DateExceptionBadInput : public IDateException	{
		public:
			const char	*what( void ) const throw();
	};

	class	DateExceptionInvalidRange : public IDateException	{
		public:
			const char	*what( void ) const throw();
	};

};

std::ostream	&operator<<( std::ostream &out, const Date &d );

#endif
