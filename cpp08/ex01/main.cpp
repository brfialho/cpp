/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:18:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 14:21:47 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ( void )
{
	Span	s;

	for (int i = 0; i < DEFAULT_SIZE - 1; i++)
		s.addNumber(i * 10);
	
	std::cout << s << '\n';

	try {
		s.addNumber(999);
	}
	catch (Span::SpanException &e)	{
		std::cout << e.what() << '\n';
	}
	std::cout <<  s.longestSpan() << '\n'
			<< s.shortestSpan() << '\n';
}
