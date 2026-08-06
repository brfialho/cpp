/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 18:23:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main ( void )
{
	DiamondTrap	d("CHARIZARD");

	std::cout << '\n';
	d.whoAmI();
	d.displayStats();

	for (int i = 0; i < 5; i++)
	{
		d.takeDamage(8);
		d.attack("DUMMY");
		std::cout << '\n';
	}
	d.displayStats();
	d.guardGate();
	d.highFivesGuys();
} 
