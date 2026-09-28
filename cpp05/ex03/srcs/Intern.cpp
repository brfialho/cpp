#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern Default Constructor has been called\n";
}

Intern::Intern( const Intern &other )
{
	// std::cout << "Intern Copy Constructor has been called\n";
}

Intern&	Intern::operator=(const Intern& other)
{
	// std::cout << "Intern Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	return *this;
}

Intern::~Intern()
{
	// std::cout << "Intern Destructor has been called\n";
}

