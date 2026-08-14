#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource Default Constructor has been called\n";
}

IMateriaSource::IMateriaSource( const IMateriaSource &other )
{
	std::cout << "IMateriaSource Copy Constructor has been called\n";
}

IMateriaSource&	IMateriaSource::operator=(const IMateriaSource& other)
{
	std::cout << "IMateriaSource Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource Destructor has been called\n";
}

