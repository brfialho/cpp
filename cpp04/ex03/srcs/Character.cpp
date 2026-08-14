#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor has been called\n";
}

Character::Character( const Character &other )
{
	std::cout << "Character Copy Constructor has been called\n";
}

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor has been called\n";
}

