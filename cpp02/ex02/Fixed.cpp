/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/03 18:11:41 by brfialho         ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed &other)
{
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other)
{
	return (_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other)
{
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(_value + other._value));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(_value - other._value));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(_value * other._value));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(_value / other._value));
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
