/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 18:41:00 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_name("UNAMED"),
_hp(10),
_energy(10),
_atk(0)
{
	std::cout << "Default Constructor has been called\n";
}

ClapTrap::ClapTrap( const std::string name ):
_name(name),
_hp(10),
_energy(10),
_atk(0)
{
	std::cout << "Name Constructor has been called\n";
}

ClapTrap::ClapTrap( const ClapTrap &other ):
_name(other._name),
_hp(other._hp),
_energy(other._energy),
_atk(other._atk)
{
	std::cout << "Copy Constructor has been called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "Assign Operator has been called\n";

	if (this == &other)
		return *this;

	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_atk = other._atk;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_hp)
	{
		std::cout << "ClapTrap " << _name << " cant attack because he is dead\n";
		return;
	}
	if (!_energy)
	{
		std::cout << "ClapTrap " << _name << " cant attack because he has no energy\n";
		return;
	}

	std::cout << "ClapTrap " << _name 
			<< " attacks " << target 
			<< " causing " << _atk << " points of damage"
			<< '\n';
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hp)
	{
		std::cout << "ClapTrap " << _name << "is already dead :(\n";
		return;
	}

	amount > _hp ? _hp = 0 : _hp -= amount;

	std::cout << "ClapTrap " << _name 
			<< " takes " << amount << " points of damage"
			<< " and now has " << _hp << " points of hp"
			<< '\n';
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hp)
	{
		std::cout << "ClapTrap " << _name << " cant use repair because he is dead\n";
		return;
	}
	if (!_energy)
	{
		std::cout << "ClapTrap " << _name << " cant use repair because he has no energy\n";
		return;
	}

	_hp += amount;
	_energy--;
	std::cout << "ClapTrap " << _name 
			<< " repaired itself for " << amount << " hp"
			<< " and now has " << _hp << " points of hp"
			<< '\n';
}
