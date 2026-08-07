/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:28:51 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 21:14:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
ClapTrap("UNAMED_clap_name", 100, 50, 30)
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << " Default Constructor has been called\n";
}

DiamondTrap::DiamondTrap( const std::string &name ):
ClapTrap(name + "_clap_name", 100, 50, 30),
ScravTrap(),
FragTrap(),
_name(name)
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << " Name Constructor has been called\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ):
ClapTrap(other),
ScravTrap(other),
FragTrap(other),
_name(other._name)
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << " Copy Constructor has been called\n";
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << " Assign Operator has been called\n";
	if (this == &other)
		return *this;

	ClapTrap::operator=(other);
	assignScravMembers(other);
	// assignFragMembers(other);
	_name = other._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << " Destructor has been called\n";
}

std::string		DiamondTrap::getClassName( void )
{
	return ("DiamondTrap");
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << _name << " aka " << getName() << '\n';
}

void	DiamondTrap::displayStats( void )
{
	std::cout << "HP: " << getHp() << '\n'
			<< "Energy: " << getEnergy() << '\n'
			<< "ATK: " << getAtk() << '\n';
}

void	DiamondTrap::attack(const std::string& target)
{
	ScravTrap::attack(target);
}
