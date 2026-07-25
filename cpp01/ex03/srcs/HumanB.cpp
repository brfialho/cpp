/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:54:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 18:33:47 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( const std::string &name ):
_name(name)
{}

void	HumanB::setWeapon( const Weapon &weapon )
{
	_weapon = weapon;
}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << '\n'	;
}
