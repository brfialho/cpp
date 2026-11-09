/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:55:41 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/09 16:53:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main( void )
{
	MutantStack<int>					m;
	MutantStack<int>::const_iterator 	cit;
	MutantStack<int>::const_iterator	ceit;
	MutantStack<int>::iterator			it;

	std::cout << std::boolalpha;

	std::cout << m.empty() << '\n';

	m.push(1);
	m.push(2);
	std::cout << m.top() << '\n';

	for (int i = 3; i < 15; i ++)
		m.push(i);
			
	cit = m.begin();
	ceit = m.end();
	++cit;
	--ceit;

	std::cout << m << '\n';

	std::cout << "BOTTOM >>| ";
	while (cit != ceit)
		std::cout << *cit++ << ' ';
	std::cout << "|>> TOP \n";

	it = m.begin();
	it += m.size() / 2;
	*it = 100;
	std::cout << m << '\n';

	std::stack<int>s(m);
	std::cout << m.top() << '\n';
}
