/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 23:40:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/30 00:54:33 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n"
			<< "Harl is debugging the code... Finally he is doing something.\n\n";
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n"
			<< "Harl is informing you... You should try to understand him.\n\n";
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n"
			<< "Harl is warning you... BEWARE!\n\n";
}
void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n"
			<< "RUN YOU FOOL!\n\n";
}

void	Harl::complain( std::string level )
{
	static std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			break;
	}
}
