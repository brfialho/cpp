/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:10:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/30 16:17:27 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#define DEFAULT_SIZE 10


class	Span {

private:
	unsigned int		_maxSize;
	std::vector<int>	_v;

public:
	Span();
	Span( unsigned int maxSize );
	Span( const Span &other );
	~Span();
	Span& operator=( const Span &other );

	const std::vector<int>	&getVector( void ) const;

	template <typename It>
	void	addNumber( It begin, It end );
	void	addNumber( int n );
	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;
	
	class	SpanException : public std::exception	{
		public:
			const char	*what ( void ) const throw() = 0;
	};

	class	SpanOverflowException : public SpanException {
		public:
			const char	*what ( void ) const throw();
	};

	class	SpanInsufficientElementsException : public SpanException {
		public:
			const char	*what ( void ) const throw();
	};

};

std::ostream	&operator<<( std::ostream &out, Span &s );

template <typename It>
void	Span::addNumber( It begin, It end )
{
	_v.insert(_v.begin(), begin, end);
}
	
#endif
