/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:22:29 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 16:43:29 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie	*z;

	randomChump("MR Brains");
	z = newZombie("Michael jackson");
	z->announce();
	delete z;
}
