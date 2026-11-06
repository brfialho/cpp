/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iterator.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:49:13 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/06 13:39:21 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TPP
# define ITERATOR_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::Iterator::Iterator( void ):
_p(NULL)
{}

template <typename T>
MutantStack<T>::Iterator::Iterator( const T *p ):
_p(p)
{}

template <typename T>
MutantStack<T>::Iterator::Iterator( const MutantStack<T>::Iterator &other ):
_p(other._p)
{}

template <typename T>
MutantStack<T>::Iterator::~Iterator()
{}

template <typename T>
typename MutantStack<T>::Iterator&	MutantStack<T>::Iterator::operator=(const MutantStack<T>::Iterator &other)
{
	if (this == &other)
		return *this;

	_p = other._p;
	return *this;
}

template <typename T>
T	&MutantStack<T>::Iterator::operator->( void ) const
{
	return *_p;
}

template <typename T>
T	&MutantStack<T>::Iterator::operator->( void )
{
	return *_p;
}

#endif
