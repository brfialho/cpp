/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:18:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 17:08:38 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ( void )
{
	{
		Span	s;

		for (int i = 0; i < DEFAULT_SIZE; i++)
			s.addNumber(i * 10);
		
		std::cout << s << '\n';

		try {
			s.addNumber(990);
		}
		catch (Span::SpanException &e)	{
			std::cout << e.what() << '\n';
		}
	}
	{
		Span s = Span(5);
		s.addNumber(6);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);
		std::cout << s.longestSpan() << '\n'
				<< s.shortestSpan() << '\n';
	}
}
