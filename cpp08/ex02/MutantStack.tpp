/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:22:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/30 16:29:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ):
_s()
{}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &other ):
_s(other._s)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack &other)
{
	if (this == &other)
		return *this;

	_s(other._s);
	return *this;
}

#endif
