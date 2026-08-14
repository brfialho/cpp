#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"
class	MateriaSource : public IMateriaSource	{

private:


public:
	MateriaSource();
	MateriaSource( const MateriaSource &other );
	MateriaSource& operator=( const MateriaSource &other );
	~MateriaSource();

};

#endif
