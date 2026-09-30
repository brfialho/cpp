/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 02:58:06 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 03:14:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>

Base	*generate(void);
// void	identify(Base* p);
// void	identify(Base& p);

int	main( void )
{
	for (int i = 0; i < 100; i++)
		generate();
}

Base	*generate(void)
{
	static unsigned long	state = 0;

	if (!state)
	{
		int *seed = new int;
		state = (unsigned long)seed;
		delete seed;
	}
	state = state * 1103515245 + 12345;
	switch ((state >> 16) % 3)
	{
		case (0):
			return new A();
		case (1):
			return new B();
		case (2):
			return new C();
	}
	return (NULL);
}

// void	identify(Base* p)
// {
// 	std::cout << 
// }
