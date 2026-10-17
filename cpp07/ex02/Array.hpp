/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:20:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/17 14:08:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class	Array {

private:
	unsigned int	_size;
	T				*_array;

public:
	Array();
	Array( unsigned int n );
	Array( const Array &other );
	~Array();

	Array& operator=( const Array &other );
	const T		&operator[](int idx) const;
	T			&operator[](int idx);

	unsigned int	size( void ) const;

	
	class	ArrayIndexOutOfBoundsException : public std::exception {
		const char *what( void ) const throw();
	};

};

	#include "Array.tpp"

template <typename T>
std::ostream	&operator<<( std::ostream &out, const Array<T> &a );

#endif
