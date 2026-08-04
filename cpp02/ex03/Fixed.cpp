/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 16:52:11 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
