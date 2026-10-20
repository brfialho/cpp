/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:18:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 13:50:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ( void )
{
	Span	s;

	for (int i = 0; i < DEFAULT_SIZE; i++)
		s.addNumber(i * 10);
	
	std::cout << s << '\n';

	try {
		s.addNumber(1000);
	}
	catch (Span::SpanOverflowException &e)	{
		std::cout << e.what() << '\n';
	}
	
}
