/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iterator.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:49:13 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/06 12:30:15 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TPP
# define ITERATOR_TPP

#include "MutantStack.hpp"
// #include "Iterator.hpp"

template <typename T>
MutantStack<T>::Iterator::Iterator( void )
{}

template <typename T>
MutantStack<T>::Iterator::Iterator( const MutantStack<T>::Iterator &other )
{(void)other;}

template <typename T>
MutantStack<T>::Iterator::~Iterator()
{}

template <typename T>
typename MutantStack<T>::Iterator&	MutantStack<T>::Iterator::operator=(const MutantStack<T>::Iterator &other)
{
	if (this == &other)
		return *this;

	return *this;
}

#endif
