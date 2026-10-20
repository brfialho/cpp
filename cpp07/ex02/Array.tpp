/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:20:13 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 11:03:54 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#define DEFAULT_SIZE 10

template <typename T>
Array<T>::Array( void ):
_size(DEFAULT_SIZE), _array(new T[DEFAULT_SIZE]()){}

template <typename T>
Array<T>::Array( unsigned int n ):
_size(n), _array(new T[n]()){}

template <typename T>
Array<T>::Array( const Array<T> &other ):
_size(other._size), _array(new T[_size]()) {
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;

	delete[] _array;
	_size = other._size;
	_array = new T[_size]();
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
	return *this;
}

template <typename T>
const T		&Array<T>::operator[](int idx) const
{
	if (idx < 0 || (size_t)idx >= _size)
		throw ArrayIndexOutOfBoundsException();
	return _array[idx];
}

template <typename T>
T	&Array<T>::operator[](int idx)
{
	if (idx < 0 || (size_t)idx >= _size)
		throw ArrayIndexOutOfBoundsException();
	return _array[idx];
}

template <typename T>
unsigned int	Array<T>::size( void ) const
{
	return _size;
}

template <typename T>
const char	*Array<T>::ArrayIndexOutOfBoundsException::what( void ) const throw()
{
	return ("Array: try to access memory out of bounds");
}

template <typename T>
std::ostream	&operator<<( std::ostream &out, const Array<T> &a )
{
	for (unsigned int i = 0; i < a.size(); i++)
		out << a[i] << ' ';

	return out;
}

#endif