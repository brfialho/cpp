/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:54:02 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 18:24:59 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( const std::string &name,
		const Weapon &weapon ):
_name(name),
_weapon(weapon)
{}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << '\n'	;
}
