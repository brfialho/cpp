/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 23:34:38 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static int sqrRoot(int x);

Fixed::Fixed():
_value(0)
{}

Fixed::Fixed( const int raw ):
_value (raw << _fractionalBit)
{}

Fixed::Fixed( const float raw ):
_value ((int)roundf(raw * (1 << _fractionalBit)))
{}

Fixed::Fixed( const Fixed &other ):
_value(other._value)
{}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return *this;

	_value = other._value;

	return *this;
}

Fixed::~Fixed()
{}

int	Fixed::getRawBits( void ) const
{
	return _value;
}

int		Fixed::getFractionalBit( void ) const
{
	return _fractionalBit;
}

void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float) _value / (1 << _fractionalBit));
}

int		Fixed::toInt( void ) const
{
	return	(_value >> _fractionalBit);
}

Fixed	Fixed::squareRoot( void )
{
	Fixed	f;
	f.setRawBits(sqrRoot(_value << _fractionalBit));
	return (f);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;

	result._value = _value + other._value;
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;

	result._value = _value - other._value;
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;

	result._value = (_value * other._value) >> _fractionalBit;
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other._value == 0)
		throw	std::runtime_error("Division by 0\n");

	Fixed	result;

	result._value = (_value << _fractionalBit) / other._value;
	return (result);
}

Fixed	&Fixed::operator++()
{
	_value++;

	return *this;
}

Fixed	&Fixed::operator--()
{
	_value--;

	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;

	_value++;

	return old;
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;

	_value--;

	return old;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();

    return out;
}

std::istream&	operator>>(std::istream& in, Fixed& fixed)
{
	std::string	input;

	in >> input;

	if (input.empty()
	|| input == "."
	|| input == "+"
	|| input == "-"
	|| input.find_first_not_of("+-0123456789.") != std::string::npos
	|| input.find_first_of(".") != input.find_last_of(".")
	|| input.find("+", 1) != std::string::npos
	|| input.find("-", 1) != std::string::npos
	|| input.find(".") == input.length() - 1)
	{
		in.setstate(std::ios::failbit);
		return in;
	}
	else if (input.find(".") == std::string::npos)
		fixed = Fixed(std::atoi(input.c_str()));
	else
		fixed = Fixed((float)std::atof(input.c_str()));
	return in;
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if (b < a)
		return (b);
	return (a);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if (b > a)
		return (b);
	return (a);
}

const Fixed	&Fixed::min( const Fixed &a,  const Fixed &b )
{
	if (b < a)
		return (b);
	return (a);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if (b > a)
		return (b);
	return (a);
}

static int sqrRoot(int x)
{
    int root = 0;
    int bit = 1u << 30;

    while (bit > x)
        bit >>= 2;

    while (bit != 0) 
	{
        if (x >= root + bit)
		{
            x -= root + bit;
            root = (root >> 1) + bit;
        } 
		else 
		{
            root >>= 1;
        }
        bit >>= 2;
    }

    return root;
}
