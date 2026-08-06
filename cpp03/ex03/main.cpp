/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 19:25:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main ( void )
{
	DiamondTrap	d("CHARIZARD");
	DiamondTrap	c(d);

	std::cout << '\n';
	d.whoAmI();
	d.displayStats();
	c.whoAmI();
	c.displayStats();

	for (int i = 0; i < 5; i++)
	{
		d.takeDamage(8);
		d.attack("DUMMY");
		std::cout << '\n';
	}

	c = d;

	d.displayStats();
	d.guardGate();
	c.whoAmI();
	c.displayStats();
	d.highFivesGuys();
} 
