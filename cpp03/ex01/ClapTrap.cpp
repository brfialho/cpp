/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/05 20:21:06 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_name("UNAMED"),
_hp(100),
_energy(50),
_atk(20)
{
	std::cout << "ClapTrap " << _name << " Default Constructor has been called\n";
}

ClapTrap::ClapTrap( const std::string name ):
_name(name),
_hp(100),
_energy(50),
_atk(20)
{
	std::cout << "ClapTrap " << _name << " Name Constructor has been called\n";
}

ClapTrap::ClapTrap( const ClapTrap &other ):
_name(other._name),
_hp(other._hp),
_energy(other._energy),
_atk(other._atk)
{
	std::cout << "ClapTrap " << _name << " Copy Constructor has been called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "ClapTrap " << _name << " Assign Operator has been called\n";

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
	std::cout << "ClapTrap " << _name << " Destructor has been called\n";
}

std::string		ClapTrap::getName( void )
{
	return(_name);
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
