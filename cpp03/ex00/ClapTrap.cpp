/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 18:14:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_name("UNAMED"),
_hp(10),
_mana(10),
_atk(0)
{
	std::cout << "Default Constructor has been called\n";
}

ClapTrap::ClapTrap( const std::string name ):
_name(name),
_hp(10),
_mana(10),
_atk(0)
{
	std::cout << "Name Constructor has been called\n";
}

ClapTrap::ClapTrap( const ClapTrap &other ):
_name(other._name),
_hp(other._hp),
_mana(other._mana),
_atk(other._atk)
{
	std::cout << "Copy Constructor has been called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "Assign Operator has been called\n";

	if (this == &other)
		return *this;

	this->_name = other._name;
	this->_hp = other._hp;
	this->_mana = other._mana;
	this->_atk = other._atk;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called\n";
}
