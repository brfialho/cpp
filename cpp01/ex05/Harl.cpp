/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 23:40:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/30 00:24:20 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

void	Harl::debug( void )
{
	std::cout << "DEBUG\n";
}

void	Harl::info( void )
{
	std::cout << "INFO\n";
}

void	Harl::warning( void )
{
	std::cout << "WARNING\n";
}
void	Harl::error( void )
{
	std::cout << "ERROR\n";
}

void	Harl::complain( std::string level )
{
	static std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static void (Harl::		*methods[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*methods[i])();
}
