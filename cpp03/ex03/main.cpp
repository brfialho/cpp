/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 21:17:08 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main ( void )
{
	DiamondTrap	d("CHARIZARD");
	DiamondTrap	c(d);
	DiamondTrap b("BATATA");
	ScravTrap	s("SCRAV");
	FragTrap	f("FRAG");

	std::cout << '\n';
	d.whoAmI();
	d.displayStats();
	c.whoAmI();
	c.displayStats();

	for (int i = 0; i < 5; i++)
	{
		d.takeDamage(8);
		d.attack("DUMMY");
		s.attack("DUMMY");
		b.takeDamage(50);
		f.attack("DUMMY");
		std::cout << '\n';
	}

	c = d;

	b.attack("DUMMY");
	d.whoAmI();
	d.displayStats();
	d.guardGate();
	c.whoAmI();
	c.displayStats();
	d.highFivesGuys();
	f.highFivesGuys();
} 
