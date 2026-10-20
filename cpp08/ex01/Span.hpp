/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:10:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 13:50:18 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#define DEFAULT_SIZE 100

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

	void	addNumber( int n );

	class	SpanOverflowException : public std::exception {
		public:
			const char	*what ( void ) const throw();
	};

};

std::ostream	&operator<<( std::ostream &out, Span &s );

#endif
