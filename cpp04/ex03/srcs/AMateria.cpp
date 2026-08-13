/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:32:07 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 19:03:34 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():
_type("AMateria")
{
	std::cout << "AMateria Default Constructor has been called\n";
}

AMateria::AMateria( const AMateria &other ):
_type(other._type)
{
	std::cout << "AMateria Copy Constructor has been called\n";
}

AMateria::AMateria( std::string const &type ):
_type(type)
{
	std::cout << "AMateria Type Constructor has been called\n";
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	std::cout << "AMateria Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor has been called\n";
}

const std::string	&AMateria::getType() const
{
	return _type;
}
