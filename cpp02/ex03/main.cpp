/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:30:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 22:56:02 by brfialho         ###   ########.fr       */
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

	Fixed	f(1);
	int i = 1;
	while (std::cin >> i >> f && i != 0)
		std::cout << squareRoot(i) << ' ' << f << std::endl;
}
