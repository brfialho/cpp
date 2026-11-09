/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:22:46 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/09 16:51:38 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <cstdlib>
#include <stack>
#include <string>
#include <iostream>

template <typename T>
class	MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	MutantStack();
	MutantStack( const MutantStack &other );
	~MutantStack();
	MutantStack& operator=( const MutantStack &other );

	iterator		begin( void );
	iterator		end( void );
	const_iterator	begin( void ) const;
	const_iterator	end( void ) const;
};

template <typename T>
std::ostream	&operator<<( std::ostream &out, const MutantStack<T> &m );

	#include "MutantStack.tpp"

#endif
