/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 19:38:51 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():
_name("EMPYT"),
_inventory()
{
	std::cout << "Character Default Constructor has been called\n";
}

Character::Character( const std::string &name ):
_name(name),
_inventory()
{
	std::cout << "Character Name Constructor has been called\n";
}

Character::Character( const Character &other ):
_name(other._name)
{
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		_inventory[i] = other._inventory[i];
	std::cout << "Character Copy Constructor has been called\n";
}

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	_name = other._name;
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		_inventory[i] = other._inventory[i];
	// Do I just lose the refrence here?????
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor has been called\n";
}

const std::string	&Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < INVENTORY_SLOTS && _inventory[i] != NULL)
		++i;
	if (i == INVENTORY_SLOTS)
		return;
	_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SLOTS || _inventory[idx] == NULL)
		return;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY_SLOTS || _inventory[idx] == NULL)
		return;
	_inventory[idx]->use(target);
}
