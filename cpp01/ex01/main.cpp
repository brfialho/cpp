/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:48:53 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 17:29:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name );

int main( void )
{
	Zombie	*z;

	z = zombieHorde(10, "ROBSON");

	int i = -1;
	while (++i < 10)
		z[i].announce();

	delete[] z; 
}
