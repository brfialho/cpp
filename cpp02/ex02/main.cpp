/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:30:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 16:26:18 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	{
		Fixed	a;
		Fixed	const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}

	Fixed		a;
	Fixed const	c( 42.25f );

	a = Fixed(5.5f);
	Fixed	b = a;

	std::cout << '\n';
	std::cout << a + c << '\n';
	std::cout << a - c << '\n';
	std::cout << a * c << '\n';
	std::cout << a / b << '\n';

	std::cout << std::boolalpha;
	std::cout << a << " > " << c << ' ' << (a > c) << '\n';
	std::cout << a << " < " << c << ' ' << (a < c) << '\n';
	std::cout << a << " >= " << c << ' ' << (a >= c) << '\n';
	std::cout << a << " >= " << b << ' ' << (a >= b) << '\n';
	std::cout << a << " <= " << c << ' ' << (a <= c) << '\n';
	std::cout << a << " <= " << b << ' ' << (a <= b) << '\n';
	std::cout << a << " == " << c << ' ' << (a == c) << '\n';
	std::cout << a << " == " << b << ' ' << (a == b) << '\n';
	std::cout << a << " != " << c << ' ' << (a != c) << '\n';
	std::cout << a << " != " << b << ' ' << (a != b) << '\n';
}
