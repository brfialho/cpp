/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:32:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 19:23:29 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
AMateria("ice")
{
	std::cout << "Ice Default Constructor has been called\n";
}

Ice::Ice( const Ice &other ):
AMateria(other)
{
	std::cout << "Ice Copy Constructor has been called\n";
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	AMateria::operator=(other);
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor has been called\n";
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria	*Ice::clone() const
{
	return new Ice;
}
