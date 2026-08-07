/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 21:05:19 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_name("UNAMED"),
_hp(10),
_energy(10),
_atk(0)
{
	std::cout << "ClapTrap " << _name << " Default Constructor has been called\n";
}

ClapTrap::ClapTrap( const std::string &name ):
_name(name),
_hp(10),
_energy(10),
_atk(0)
{
	std::cout << "ClapTrap " << _name << " Name Constructor has been called\n";
}

ClapTrap::ClapTrap( 
		const std::string &name, 
		unsigned int hp, 
		unsigned int energy, 
		unsigned int atk ):
_name(name),
_hp(hp),
_energy(energy),
_atk(atk)
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

std::string		ClapTrap::getClassName( void )
{
	return ("ClapTrap");
}

std::string		ClapTrap::getName( void )
{
	return(_name);
}

unsigned int	ClapTrap::getHp( void )
{
	return(_hp);
}

unsigned int	ClapTrap::getEnergy( void )
{
	return(_energy);
}

unsigned int	ClapTrap::getAtk( void )
{
	return(_atk);
}

void	ClapTrap::attack(const std::string& target)
{
	std::string	nameToPrint = _name;

	if (getClassName() == "DiamondTrap")
		nameToPrint.erase(nameToPrint.length() - CLAP_NAME_LENGTH);
	if (!_hp)
	{
		std::cout << getClassName() << " " << nameToPrint << " cant attack because he is dead\n";
		return;
	}
	if (!_energy)
	{
		std::cout << getClassName() << " " << nameToPrint << " cant attack because he has no energy\n";
		return;
	}

	std::cout << getClassName() << " " << nameToPrint 
			<< " attacks " << target 
			<< " causing " << _atk << " points of damage"
			<< '\n';
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::string	nameToPrint = _name;

	if (getClassName() == "DiamondTrap")
		nameToPrint.erase(nameToPrint.length() - CLAP_NAME_LENGTH);
	if (!_hp)
	{
		std::cout << getClassName() << " " << nameToPrint << " is already dead :(\n";
		return;
	}

	amount > _hp ? _hp = 0 : _hp -= amount;
	std::cout << getClassName() << " " << nameToPrint 
			<< " takes " << amount << " points of damage"
			<< " and now has " << _hp << " points of hp"
			<< '\n';
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::string	nameToPrint = _name;

	if (getClassName() == "DiamondTrap")
		nameToPrint.erase(nameToPrint.length() - CLAP_NAME_LENGTH);
	if (!_hp)
	{
		std::cout << getClassName() << " " << nameToPrint << " cant use repair because he is dead\n";
		return;
	}
	if (!_energy)
	{
		std::cout << getClassName() << " " << nameToPrint << " cant use repair because he has no energy\n";
		return;
	}

	_hp += amount;
	_energy--;
	std::cout << getClassName() << " " << nameToPrint 
			<< " repaired itself for " << amount << " hp"
			<< " and now has " << _hp << " points of hp"
			<< '\n';
}
