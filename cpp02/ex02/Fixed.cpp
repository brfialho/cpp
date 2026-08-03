/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/03 17:38:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():
_value(0)
{
	std::cout << "Default Constructor Called\n";
}

Fixed::Fixed( const int raw ):
_value (raw << _fractionalBit)
{
	std::cout << "Int Constructor Called\n";
}

Fixed::Fixed( const float raw ):
_value ((int)roundf(raw * (1 << _fractionalBit)))
{
	std::cout << "Float Constructor Called\n";
}

Fixed::Fixed( const Fixed &other ):
_value(other._value)
{
	std::cout << "Copy Constructor Called\n";
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator Called \n";

	if (this == &other)
		return *this;

	_value = other._value;

	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called \n";
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function Called\n";

	return _value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function Called \n";

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

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();

    return out;
}
