/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:44:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/05 20:04:54 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap():
_guardMode(false)
{
	std::cout << "ScravTrap Default Constructor has been called\n";
}

// ScravTrap::ScravTrap( const ScravTrap &other ):
// _guardMode(other._guardMode)
// {
// 	this.
// 	std::cout << "ScravTrap Copy Constructor destructor has been called\n";
// }

ScravTrap&	ScravTrap::operator=( const ScravTrap& other )
{
	std::cout << "ScravTrap Assign Operator has been called\n";
	if (this == &other)
		return *this;

	_guardMode = other._guardMode;
	return *this;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScravTrap Destructor has been called\n";
}

void	ScravTrap::guardGate( void )
{
	std::cout << "ScravTrap " << this->getName() << " is now in guard mode\n";
	_guardMode = true;
}
