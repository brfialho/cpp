/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:10:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 13:48:46 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():
_maxSize(DEFAULT_SIZE),
_v()
{
	_v.reserve(_maxSize);
}

Span::Span( unsigned int maxSize ):
_maxSize(maxSize),
_v()
{
	_v.reserve(_maxSize);
}


Span::Span( const Span &other ):
_maxSize(other._maxSize),
_v(other._v)
{
	_v.reserve(_maxSize);
}

Span::~Span()
{}

Span&	Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	
	_maxSize = other._maxSize;
	_v = other._v;
	_v.reserve(_maxSize);
	return *this;
}

const std::vector<int>	&Span::getVector( void ) const
{
	return _v;
}

void	Span::addNumber( int n )
{
	if (_v.size() == _maxSize)
		throw	SpanOverflowException();
	_v.push_back(n);
}

const char	*Span::SpanOverflowException::what ( void ) const throw()
{
	return "span: span overflow";
}

std::ostream	&operator<<( std::ostream &out, Span &s )
{
	for (std::vector<int>::const_iterator it = s.getVector().begin(); it != s.getVector().end(); it++)
		std::cout << *it << ' ';
	return out;
}
