/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:49:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/05 19:45:37 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main ( void )
{
	// ClapTrap	a("a");
	ScravTrap	s;
	

	s.guardGate();
	for (int i = 0; i < 12; i++)
	{
		// a.attack("target");
		s.attack("scrap target");
		std::cout << '\n';
	}
} 
