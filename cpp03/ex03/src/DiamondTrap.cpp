/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:28:51 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 17:28:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
{}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	if (this == &other)
		return *this;
	return *this;
}

DiamondTrap::~DiamondTrap()
{}

