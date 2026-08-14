#ifndef CHARACTER_H
# define CHARACTER_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter	{

private:
	std::string	_name;

public:
	Character();
	Character( const Character &other );
	Character& operator=( const Character &other );
	~Character();

};

#endif
