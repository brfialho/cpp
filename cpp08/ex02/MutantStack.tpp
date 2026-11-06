/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:22:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/06 10:28:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void )
{}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &other ):
std::stack<T>(other)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &other)
{
	if (this == &other)
		return *this;

	std::stack<T>::operator=(other);
	return *this;
}

template <typename T>
std::ostream	&operator<<( std::ostream &out, const MutantStack<T> &m )
{
	MutantStack<T>	tmp(m);

	out << "TOP >>| ";
	while (!tmp.empty())
	{
		out << tmp.top() << ' ';
		tmp.pop();
	}
	out << "|>> BOTTOM";
	
	return out;
}

#endif
