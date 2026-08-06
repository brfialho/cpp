/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:10:23 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 20:55:56 by brfialho         ###   ########.fr       */
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
	static	std::string	nameToPrint = getName();
	static	std::string	helper = "_clap_name";

	nameToPrint = getName();
	if (getClassName() == "DiamondTrap")
		nameToPrint.erase(nameToPrint.length() - helper.length());

	if (getHp() == 0)
	{
		std::cout << "Unfortunely for " << getClassName()
				<< ' ' << nameToPrint
				<< " dead guys cant high five... :(\n";
		return ;
	}
	std::string	input;

	prompt:
	input.clear();
	std::cout << CLEAR
			<< PROMPT_COLOR
			<< getClassName() << ' ' << nameToPrint << " wants to high five!!!!\n\n"
			<<	"Type Y to high five or N to ignore"
			<< RESET
			<< std::endl;
	std::getline(std::cin, input);
	if (input == "Y" || input == "y")
	{
		std::cout << BOLD_GREEN
		<< "You highfived "<< getClassName() << ' ' << nameToPrint << " and its happy! \n"
		<< RESET;
		return;
	}
	if (input == "N" || input == "n")
	{
		std::cout << BOLD_RED
		<< "You ignored "<< getClassName() << ' ' << nameToPrint << " and now its crying...\nYou cold hearted MONSTER!\n"
		<< RESET;
		return;
	}
	goto prompt;
}
