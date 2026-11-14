/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:04:47 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 17:14:41 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

void	Date::parseDate( Date &d, const std::string &s )
{
	char				c[2] = {0};
	std::stringstream	ss(s);

	ss >> d._year;
	ss >> c[0];
	ss >> d._month;
	ss >> c[1];
	ss >> d._day;

	if (ss.fail() || !ss.eof() || c[0] != d._separator || c[1] != d._separator)
		throw DateExceptionBadInput();
	if (d._year < MIN_YEAR || d._year > MAX_YEAR
		|| d._month < MIN_MONTH || d._month > MAX_MONTH
		|| d._day < MIN_DAY || d._day > MAX_DAY)
		throw DateExceptionInvalidRange();
}

Date::Date():
_year(0),
_month(0),
_day(0),
_separator(0)
{}

Date::Date( const std::string &date, char separator ):
_separator(separator)
{
	parseDate(*this, date);
}

Date::Date( const Date &other ):
_year(other._year),
_month(other._month),
_day(other._day),
_separator(other._separator)
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
	_separator = other._separator;

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

bool	Date::operator>(const Date &other) const
{
	if (_year != other._year)
		return (_year > other._year);
	if (_month != other._month)
		return (_month > other._month);
	return (_day > other._day);
}

bool	Date::operator<(const Date &other) const
{
	if (_year != other._year)
		return (_year < other._year);
	if (_month != other._month)
		return (_month < other._month);
	return (_day < other._day);
}

bool	Date::operator>=(const Date &other) const
{
	return !(*this < other);
}

bool	Date::operator<=(const Date &other) const
{
	return !(*this > other);
}

bool	Date::operator==(const Date &other) const
{
	return !(*this > other || *this < other);
}

bool	Date::operator!=(const Date &other) const
{
	return !(*this == other);
}

const char	*Date::DateExceptionBadInput::what( void ) const throw()
{
	return ("Date: bad input");
}

const char	*Date::DateExceptionInvalidRange::what( void ) const throw()
{
	return ("Date: invalid range");
}

std::ostream	&operator<<( std::ostream &out, const Date &d )
{
	out << d.getDay() << '/' << d.getMonth() << '/' << d.getYear();
	
	return out;	
}
