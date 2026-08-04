/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 18:41:27 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void )
{
	ClapTrap	a("Pikachu");
	ClapTrap	b("Squirtle");
	ClapTrap	c("Charmander");

	for (int i = 0; i < 12; i++)
	{
		a.attack("enemy");
		b.beRepaired(5);
		c.takeDamage(4);
		std::cout << '\n';
	}
	c.attack("enemy");
	c.beRepaired(5);
}
