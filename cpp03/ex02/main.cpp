/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 17:06:03 by brfialho         ###   ########.fr       */
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
	s.guardGate();
	for (int i = 0; i < 52; i++)
	{
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
} 
