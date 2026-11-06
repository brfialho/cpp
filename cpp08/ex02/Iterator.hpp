#ifndef ITERATOR_HPP
# define ITERATOR_HPP

#include <string>
#include <iostream>
#include "MutantStack.hpp"

template <typename T>
class	MutantStack<T>::Iterator {

private:
	T	*_p;

public:
	Iterator();
	Iterator( const T *p );
	Iterator( const Iterator &other );
	~Iterator();
	Iterator& operator=( const Iterator &other );

	T	&operator->( void ) const;
	T	&operator->( void );

};
	#include "Iterator.tpp"

#endif
