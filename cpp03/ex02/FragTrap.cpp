/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:10:23 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 16:10:25 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{}

FragTrap::FragTrap( const FragTrap &other )
{}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	if (this == &other)
		return *this;
	return *this;
}

FragTrap::~FragTrap()
{}

