/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:53:32 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 18:32:21 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon( const std::string &type ):
_type(type)
{}

const	std::string	&Weapon::getType( void )
{
	return _type;
}

void	Weapon::setType(const std::string &type)
{
	_type = type;
}
