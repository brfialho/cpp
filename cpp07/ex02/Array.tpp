/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:20:13 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/05 18:51:19 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array( void ):
_size(0), _array(NULL){}

template <typename T>
Array<T>::Array( unsigned int n ):
_size(n), _array(new T[n]){}

template <typename T>
Array<T>::Array( const &Array<T> other ):
_size(other._size), _array(NULL){}

Array&	Array::operator=(const Array& other)
{
	if (this == &other)
		return *this;

	return *this;
}

Array::~Array()
{}

// const char	*Array::ArrayIndexOutOfBoundsException::what( void ) const throw()
// {
// 	return ("Array: try to access memory out of bounds");
// }

#endif