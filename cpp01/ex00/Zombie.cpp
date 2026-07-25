/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:15:26 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 16:26:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
{}

Zombie::Zombie (std::string name):
name(name)
{}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->name << " is no longer with us!\n";
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
