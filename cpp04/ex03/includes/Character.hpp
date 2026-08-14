#ifndef CHARACTER_H
# define CHARACTER_H

#include <string>
#include <iostream>

class	Character {

private:


public:
	Character();
	Character( const Character &other );
	Character& operator=( const Character &other );
	~Character();

};

#endif
