/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/30 19:04:07 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():
_value(0)
{
	std::cout << "Default Constructor Called\n";
}

Fixed::Fixed( const Fixed &other ):
_value(other._value)
{
	std::cout << "Copy Constructor Called\n";

	_value = other.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator Called \n";

	_value = other.getRawBits();

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
