/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:30:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 17:25:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point	a(0, 0), b(1.5, 3), c(3, 0);
	Point	p(1.5, 1.5);

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, p) << '\n';
}
