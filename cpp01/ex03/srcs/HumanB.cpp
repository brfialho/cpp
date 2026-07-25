/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:54:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 18:56:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( const std::string &name ):
_name(name),
_weapon(NULL)
{}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}

void	HumanB::attack( void )
{
	if (!_weapon)
		std::cout << _name << " attacks with their bare hands\n";
	else
		std::cout << _name << " attacks with their " << (*_weapon).getType() << '\n'	;
}
