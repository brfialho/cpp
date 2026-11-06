#ifndef ITERATOR_HPP
# define ITERATOR_HPP

#include <string>
#include <iostream>
#include "MutantStack.hpp"

template <typename T>
class	MutantStack<T>::Iterator {

private:
	T	*p;

public:
	Iterator();
	Iterator( const Iterator &other );
	~Iterator();
	Iterator& operator=( const Iterator &other );

};
	#include "Iterator.tpp"

#endif
