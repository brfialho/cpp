/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 19:37:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScravTrap.hpp"

int	main ( void )
{
	FragTrap	f("PICCACHU");
	FragTrap	t(f);
	FragTrap	a("CHARMANDER");
	ClapTrap	c("CLAP");
	ScravTrap 	s("SCRAV");

	f.highFivesGuys();
	if (std::cin.fail())
		return 1;
	s.guardGate();
	for (int i = 0; i < 52; i++)
	{
		std::cout << "LOOP: " << i << '\n';
		f.attack("DUMMY");
		t.beRepaired(10);
		a.takeDamage(20);
		a.attack("DUMMY");
		c.beRepaired(10);
		s.beRepaired(10);
		s.attack("DUMMY");
		std::cout << '\n';
	}
	a.highFivesGuys();
	if (std::cin.fail())
		return 1;
	f.highFivesGuys();
	if (std::cin.fail())
		return 1;
} 
