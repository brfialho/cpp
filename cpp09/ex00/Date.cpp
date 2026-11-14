/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:04:47 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 16:41:51 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

void	Date::parseDate( Date &d, const std::string &s )
{
	std::stringstream	ss(s);
	char				c;

	ss >> d._year;
	ss >> c;
	ss >> d._month;
	ss >> c;
	ss >> d._day;

	if (ss.fail() || !ss.eof())
		throw DateExceptionBadInput();
}

Date::Date():
_year(0),
_month(0),
_day(0)
{}

Date::Date( const std::string &date )
{
	parseDate(*this, date);
}

Date::Date( const Date &other ):
_year(other._year),
_month(other._month),
_day(other._day)
{}

Date::~Date()
{}

Date&	Date::operator=(const Date& other)
{
	if (this == &other)
		return *this;
	_year = other._year;
	_month = other._month;
	_day = other._day;

	return *this;
}

int	Date::getYear( void ) const
{
	return _year;
}

int	Date::getMonth( void ) const
{
	return _month;
}

int	Date::getDay( void ) const
{
	return _day;
}

void	Date::changeDate( const std::string &newDate )
{
	parseDate(*this, newDate);
}

const char	*Date::DateExceptionBadInput::what( void ) const throw()
{
	return ("Date: bad input");
}

std::ostream	&operator<<( std::ostream &out, const Date &d )
{
	out << d.getDay() << '/' << d.getMonth() << '/' << d.getYear();
	
	return out;	
}
