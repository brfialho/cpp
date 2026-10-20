/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:51:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 11:09:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main( void )
{
	Array<int>	a;

	for (int i = 0; i < 10; i++)
		a[i] = i * 100;

	std::cout << a << '\n';
	a[3] = 2;
	std::cout << a[3] << '\n';
	try {
		std::cout << "INVALID " << a[-1] <<'\n';
	}
	catch (std::exception &e ) {
		std::cout << e.what() << '\n';
	}
	try {
		std::cout << "INVALID " << a[10000] <<'\n';
	}
	catch (std::exception &e ) {
		std::cout << e.what() << '\n';
	}

	Array<std::string> b(3);

	std::cout << b << '\n';

	b[0] = "Hello";
	b[1] = "World";
	b[2] = ":D";

	Array<std::string> c(b);

	c[0] = "Goodbye";
	c[2] = ":(";
	std::cout << b << '\n'
			<< c << '\n';

	b = c;

	std::cout << b << '\n'
			<< c << '\n';
}