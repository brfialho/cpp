/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:55:41 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/06 13:43:23 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main( void )
{
	MutantStack<int>	m;

	std::cout << std::boolalpha;

	std::cout << m.empty() << '\n';

	m.push(1);
	m.push(2);

	std::cout << m.top() << '\n'
			<< m << '\n';

	MutantStack<int>::Iterator it = m.begin();
	MutantStack<int>::Iterator eit = m.end();

	
}


// Cansei desa pora exercicio chato pra krl pior lista
// stack nao é continuo na memoria precisa ver comon fazer o begin e end
// tomanocu
// horas resolvendo erro de compilação
// 