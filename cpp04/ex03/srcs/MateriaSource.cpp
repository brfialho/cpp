/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:48 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 21:10:04 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
_slots()
{
	std::cout << "MateriaSource Default Constructor has been called\n";
}

MateriaSource::MateriaSource( const MateriaSource &other ):
_slots()
{
	std::cout << "MateriaSource Copy Constructor has been called\n";
	for (int i = 0; i < MATERIA_SLOTS; i++)
		if (other._slots[i])
			_slots[i] = other._slots[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	for (int i = 0; i < MATERIA_SLOTS; i++)
		if (_slots[i])
			delete _slots[i];
	for (int i = 0; i < MATERIA_SLOTS; i++)
		if (other._slots[i])
			_slots[i] = other._slots[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor has been called\n";
	for (int i = 0; i < MATERIA_SLOTS; i++)
		if (_slots[i])
			delete _slots[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < MATERIA_SLOTS && _slots[i] != NULL && _slots[i] != m)
		++i;
	if (i == MATERIA_SLOTS || m == NULL || _slots[i] == m)
		return;
	_slots[i] = m->clone();
}

AMateria	*MateriaSource::createMateria( const std::string &type )
{
	int i = 0;

	while (i < MATERIA_SLOTS && _slots[i] && _slots[i]->getType() != type)
		++i;
	if (i == MATERIA_SLOTS || _slots[i] == NULL)
		return NULL;
	return (_slots[i]->clone());
}
