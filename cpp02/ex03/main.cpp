/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:30:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 23:42:54 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

// int	squareRoot( int n )
// {
// 	if (n <= 0)
// 		return 0;
// 	if (n < 1)
// 		return 1;

// 	int	i = 1;

// 	while (i * i < n)
// 		i++;
// 	return (i * ((i * i) <= n) + (i - 1) * ((i * i) - n > 0));
// }

int squareRoot(int x)
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


int	main( void )
{
	Point	a(0, 0), b(1.5, 3), c(3, 0);
	Point	p(1.5, 1.5);

	std::cout << std::boolalpha;
	// std::cout 	<< bsp(a, b, c, p) << '\n';

	// Fixed	f(1);
	// int i = 1;
	// while (std::cin >> i >> f && i != 0)
	// 	std::cout << squareRoot(i) << ' ' << f.squareRoot() << std::endl;

	// {
	// Point t1(1.5, 2.7), t2(4.8, 6.1); // EXPECTED 4.74
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(-2.4, 3.6), t2(4.1, -1.8); // EXPECTED 8.45
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(-5.5, -2.2), t2(3.7, 4.9); // EXPECTED 11.62
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(0, 0), t2(3.5, 4.5); // EXPECTED 5.70
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(-4, 2.5), t2(6, -3.5); // EXPECTED 10.30
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(7.25, -1.5), t2(-2.75, 8); // EXPECTED 13.23
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(10, 5.5), t2(-3.2, -4); // EXPECTED 17.24
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(-1, -6.7), t2(4.3, 2); // EXPECTED 10.25
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(8.0, -2.75), t2(1, 6.25); // EXPECTED 11.29
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
	// {
	// Point t1(-9.5, 3), t2(-2, -7.5); // EXPECTED 12.98
	// std::cout << Point::distance(t1, t2) << '\n';
	// }
}
