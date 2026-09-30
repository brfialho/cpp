/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:16:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 00:08:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter( const ScalarConverter &other ){(void)other;}
ScalarConverter::~ScalarConverter(){}
ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other){(void)other;return *this;}

static char	convertChar( long double raw )
{
	if (raw != raw || raw < 0 || raw > 127)
		throw ScalarConverter::charNotPossibleExcepition();
	if (raw < 33 || raw == 127)
		throw ScalarConverter::charNotVisibleException();
	return (static_cast<char>(raw));
}

static int	convertInt( long double raw )
{
	if (raw != raw)
		throw ScalarConverter::intNaNExcepition();
	if (raw > std::numeric_limits<int>::max())
		throw ScalarConverter::intOverflowExcepition();
	if (raw < std::numeric_limits<int>::min())
		throw ScalarConverter::intUnderflowExcepition();
	return (static_cast<int>(raw));
}

static long double	getRaw( std::string s )
{
	long double	raw;
	char		*end = NULL;

	if (s.empty() || s == "f")
		return (std::numeric_limits<long double>::quiet_NaN());
	raw = strtold(s.c_str(), &end);
	if (*end && std::string(end) != "f")
		return (std::numeric_limits<long double>::quiet_NaN());
	return raw;
}

void	ScalarConverter::convert( const std::string &literal )
{
	std::cout << std::showpoint
			<< std::fixed
			<< std::setprecision(1);

	long double	raw = getRaw(literal);
	try {
		std::cout << "char: " << convertChar(raw) << '\n';
	}
	catch (IScalarConverterException &e ) {
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << "int: " << convertInt(raw) << '\n';
	}
	catch (IScalarConverterException &e ) {
		std::cout << e.what() << '\n';
	}
	std::cout << "float: " << static_cast<float>(raw) << "f\n";
	std::cout << "double: " << static_cast<double>(raw) << '\n';
}

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
