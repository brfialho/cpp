/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:22:46 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/30 16:39:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>

template <typename T>
class	MutantStack {

private:
	std::stack<T>	_s;
	size_t			_size;

public:
	MutantStack();
	MutantStack( const MutantStack &other );
	~MutantStack();
	MutantStack& operator=( const MutantStack &other );

	void		pop();
	void		push( const T &value );
	size_t		size( void ) const;
	T			&top( void );
	const T		&top( void ) const;
	bool		empty( void ) const;

};
	#include "MutantStack.tpp"

#endif
