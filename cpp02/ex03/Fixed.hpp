/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:08:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 22:57:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
#include <cstdlib>

class	Fixed {


private:
	static const int	_fractionalBit = 8;
	int					_value;


public:
	static Fixed		&min( Fixed &a, Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static const Fixed	&min( const Fixed &a, const Fixed &b );
	static const Fixed	&max( const Fixed &a, const Fixed &b );

	Fixed();
	Fixed( const int raw );
	Fixed( const float raw );
	Fixed( const Fixed &other );
	Fixed& operator=( const Fixed &other );
	~Fixed();

	int		getRawBits( void ) const;
	int		getFractionalBit( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	Fixed	squareRoot( void );

	bool	operator>( const Fixed &other ) const;
	bool	operator<( const Fixed &other ) const;
	bool	operator>=( const Fixed &other ) const;
	bool	operator<=( const Fixed &other ) const;
	bool	operator==( const Fixed &other ) const;
	bool	operator!=( const Fixed &other ) const;

	Fixed	operator+( const Fixed &other ) const;
	Fixed	operator-( const Fixed &other ) const;
	Fixed	operator*( const Fixed &other ) const;
	Fixed	operator/( const Fixed &other ) const;

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);
std::istream&	operator>>(std::istream& in, Fixed& fixed);

#endif