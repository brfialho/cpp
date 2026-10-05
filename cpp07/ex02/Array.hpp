/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:20:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/05 18:50:19 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <string>
#include <iostream>

#define DEFAULT_SIZE 10

template <typename T>
class	Array {

private:
	T				*_array;
	unsigned int	_size;

public:
	Array();
	Array( unsigned int n );
	Array( const Array &other );
	Array& operator=( const Array &other );
	~Array();

	unsigned int	size( void ) const;
	
	class	ArrayIndexOutOfBoundsException : public std::exception {
		const char *what( void ) const throw();
	}

	#include "Array.tpp"
};

#endif
