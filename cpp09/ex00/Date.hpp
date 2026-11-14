/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:04:44 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 16:38:16 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
# define DATE_HPP

#include <string>
#include <iostream>
#include <sstream>

class	Date {

private:
	int	_year;
	int	_month;
	int	_day;

	static void	parseDate( Date &d, const std::string &s );

public:
	Date();
	Date( const std::string &date );
	Date( const Date &other );
	~Date();
	Date& operator=( const Date &other );

	int	getYear( void ) const;
	int	getMonth( void ) const;
	int	getDay( void ) const;

	void	changeDate( const std::string &newDate );

	class	IDateException : public std::exception	{
		public:
			const char	*what( void ) const throw() = 0;
	};

	class	DateExceptionBadInput : public IDateException	{
		public:
			const char	*what( void ) const throw();
	};

};

std::ostream	&operator<<( std::ostream &out, const Date &d );

#endif
