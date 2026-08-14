#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor has been called\n";
}

MateriaSource::MateriaSource( const MateriaSource &other )
{
	std::cout << "MateriaSource Copy Constructor has been called\n";
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor has been called\n";
}

