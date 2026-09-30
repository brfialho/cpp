/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 02:58:06 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 03:43:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main( void )
{
	Base	*base;

	for (int i = 0; i < 100; i++)
	{
		base = generate();
		identify(base);
		identify(*base);
		std::cout << '\n';
		delete base;
	}
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

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	if (dynamic_cast<B*>(p))
		std::cout << "B";
	if (dynamic_cast<C*>(p))
		std::cout << "C";
}

void	identify(Base& p)
{
	try {
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A";
	}
	catch (std::exception &e){}
	try {
		B	&b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B";
	}
	catch (std::exception &e){}
	try {
		C	&c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C";
	}
	catch (std::exception &e){}
}
