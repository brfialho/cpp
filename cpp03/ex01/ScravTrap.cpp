/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:44:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 18:44:56 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap()
{}

ScravTrap::ScravTrap( const ScravTrap &other )
{}

ScravTrap&	ScravTrap::operator=( const ScravTrap& other )
{
	if (this == &other)
		return *this;
	return *this;
}

ScravTrap::~ScravTrap()
{}

