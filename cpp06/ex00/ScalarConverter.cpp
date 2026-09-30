/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:16:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/29 21:14:12 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static char	convertChar( const std::string &s )
{
	if (s.size() != 1)
		throw ScalarConverter::charNotPossibleExcepition();
	if (s[0] < 33 || s[0] == 127)
		throw ScalarConverter::charNotVisibleException();
	return ((char) s[0]);
}

static int	convertInt( const std::string &s )
{
	long	integer;
	char	*end = NULL;

	integer = strtol(s.c_str(), &end, 10);
	if (*end)
		throw ScalarConverter::intNaNExcepition();
	if (integer > INT_MAX)
		throw ScalarConverter::intOverflowExcepition();
	if (integer < INT_MIN)
		throw ScalarConverter::intUnderflowExcepition();
	return ((int)integer);
}

static float	convertFloat( const std::string &s )
{
	(void)s;
	return (3.0);
}

void	ScalarConverter::convert( const std::string &literal )
{
	std::cout << std::showpoint;
	std::cout << std::setprecision(2);
	try {
		std::cout << "char: " << convertChar(literal) << '\n';
	}
	catch (std::exception &e ){
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << "int: " << convertInt(literal) << '\n';
	}
	catch (std::exception &e ){
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << "float: " << convertFloat(literal) << '\n';
	}
	catch (std::exception &e ){
		std::cout << e.what() << '\n';
	}
		// << "float :" << convertFloat() << '\n'
		// << "double : " << convertDouble() << '\n';
}


ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter( const ScalarConverter &other )
{
	(void)other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

const char	*ScalarConverter::charNotPossibleExcepition::what(void) const throw()
{
	return ("impossible");
}

const char	*ScalarConverter::charNotVisibleException::what(void) const throw()
{
	return ("non displayable");
}

const char	*ScalarConverter::intUnderflowExcepition::what(void) const throw()
{
	return ("underflow");
}

const char	*ScalarConverter::intOverflowExcepition::what(void) const throw()
{
	return ("overflow");
}

const char	*ScalarConverter::intNaNExcepition::what(void) const throw()
{
	return ("impossible");
}
