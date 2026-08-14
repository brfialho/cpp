#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <string>
#include <iostream>

class	IMateriaSource {

private:


public:
	IMateriaSource();
	IMateriaSource( const IMateriaSource &other );
	IMateriaSource& operator=( const IMateriaSource &other );
	~IMateriaSource();

};

#endif
