/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:28:51 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 19:15:17 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap():
// ScravTrap(),
// FragTrap()
// {
	
// }

DiamondTrap::DiamondTrap( const std::string &name ):
ClapTrap(name + "_clap_name", 100, 50, 30),
ScravTrap(),
FragTrap(),
_name(name)
{
	std::cout << "DiamondTrap " << getName() << " aka " << _name << "Constructor has been called\n";
}

// DiamondTrap::DiamondTrap( const DiamondTrap &other )
// {}

// DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
// {
// 	if (this == &other)
// 		return *this;
// 	return *this;
// }

// DiamondTrap::~DiamondTrap()
// {}

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
