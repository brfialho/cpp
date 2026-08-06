/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 17:25:48 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main ( void )
{
	ScravTrap	s("PICCACHU");
	ScravTrap	t(s);
	ScravTrap	a("CHARMANDER");
	ClapTrap	c("CLAP");
	ClapTrap	d("CLAPINHO");

	t.guardGate();
	for (int i = 0; i < 52; i++)
	{
		std::cout << "LOOP: " << i << '\n';
		s.attack("DUMMY");
		t.beRepaired(10);
		c.beRepaired(10);
		a.takeDamage(20);
		a.attack("DUMMY");
		d.attack("DUMMY");
		d.takeDamage(4);
		std::cout << '\n';
	}
} 
