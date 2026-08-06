/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 15:56:56 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main ( void )
{
	ScravTrap	s("PICCACHU");
	ScravTrap	t(s);
	ScravTrap	a("CHARMANDER");

	t.guardGate();
	for (int i = 0; i < 52; i++)
	{
		s.attack("DUMMY");
		t.beRepaired(10);
		a.takeDamage(20);
		a.attack("DUMMY");
		std::cout << '\n';
	}
} 
