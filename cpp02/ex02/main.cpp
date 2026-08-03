/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:30:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/03 18:08:40 by brfialho         ###   ########.fr       */
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
		// std::cout << Fixed::max( a, b ) << std::endl;
	}

	Fixed		a;
	Fixed const	c( 42.42f );

	a = Fixed(1234.4321f);

	std::cout << '\n';
	std::cout << a + c << '\n';
	std::cout << a - c << '\n';
	std::cout << a * c << '\n';
	std::cout << a / c << '\n';

	std::cout << (a > c) << '\n';
	std::cout << (a < c) << '\n';
	std::cout << (a >= c) << '\n';
	std::cout << (a <= c) << '\n';
	std::cout << (a == c) << '\n';
	std::cout << (a != c) << '\n';
	std::cout << a++ << ' ' << a << ' ' << ++a << '\n';
	std::cout << a-- << ' ' << a << ' ' << --a << '\n';
	
}
