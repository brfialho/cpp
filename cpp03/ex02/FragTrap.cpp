/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:10:23 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 17:08:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap("UNAMED", 100, 100, 30)
{
	std::cout << "FragTrap " << getName() << " Default Constructor has been called\n";
}

FragTrap::FragTrap( const std::string& name ):
ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << getName() << " Name Constructor has been called\n";
}

FragTrap::FragTrap( const FragTrap &other ):
ClapTrap(other)
{
	std::cout << "FragTrap " << getName() << " Copy Constructor has been called\n";
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout << "FragTrap " << getName() << " Assign Operator has been called\n";
	if (this == &other)
		return *this;

	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " Destructor has been called\n";
}

std::string		FragTrap::getClassName( void )
{
	return ("FragTrap");
}

void	FragTrap::highFivesGuys(void)
{
	std::string	input;

	prompt:
	input.clear();
	std::cout << CLEAR
			<< PROMPT_COLOR
			<< getClassName() << ' ' << getName() << " wants to high five!!!!\n\n"
			<<	"Type Y to high five him or N to ignore"
			<< RESET
			<< std::endl;
	std::getline(std::cin, input);
	if (input == "Y" || input == "y")
	{
		std::cout << BOLD_GREEN
		<< "You highfived "<< getClassName() << ' ' << getName() << " and its happy! \n"
		<< RESET;
		return;
	}
	if (input == "N" || input == "n")
	{
		std::cout << BOLD_RED
		<< "You ignored "<< getClassName() << ' ' << getName() << " and now its crying...\nYou cold hearted monster!\n"
		<< RESET;
		return;
	}
	goto prompt;
}
