/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:44:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 19:16:17 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap():
ClapTrap("UNAMED", 100, 50, 20),
_guardMode(false)
{
	std::cout << "ScravTrap " << getName() << " Default Constructor has been called\n";
}

ScravTrap::ScravTrap( const std::string &name ):
ClapTrap(name, 100, 50, 20),
_guardMode(false)
{
	std::cout << "ScravTrap " << getName() << " Name Constructor has been called\n";
}

ScravTrap::ScravTrap( const ScravTrap &other ):
ClapTrap(other),
_guardMode(other._guardMode)
{
	std::cout << "ScravTrap " << getName() << " Copy Constructor destructor has been called\n";
}

ScravTrap&	ScravTrap::operator=( const ScravTrap& other )
{
	std::cout << "ScravTrap " << getName() << " Assign Operator has been called\n";
	if (this == &other)
		return *this;

	ClapTrap::operator=(other);
	_guardMode = other._guardMode;
	return *this;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScravTrap " << getName() << " Destructor has been called\n";
}

std::string		ScravTrap::getClassName( void )
{
	return ("ScravTrap");
}

void	ScravTrap::guardGate( void )
{
	std::cout << "ScravTrap " << getName() << " is now in guard mode\n";
	_guardMode = true;
}
