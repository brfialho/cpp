/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 20:16:22 by brfialho         ###   ########.fr       */
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
_name(other._name),
_inventory()
{
	std::cout << "Character Copy Constructor has been called\n";
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
}

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	for (int i = 0; i < INVENTORY_SLOTS; i++)
		if (_inventory[i])
			delete _inventory[i];
	_name = other._name;
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor has been called\n";
	for (int i = 0; i < INVENTORY_SLOTS; i++)
		if (_inventory[i])
			delete _inventory[i];
}

const std::string	&Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < INVENTORY_SLOTS && _inventory[i] != NULL && _inventory[i] != m)
		++i;
	if (i == INVENTORY_SLOTS || m == NULL || _inventory[i] == m)
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
	std::cout << getName() << " using slot: " << idx << "	";
	_inventory[idx]->use(target);
}
