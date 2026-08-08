/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:16:57 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:29:23 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
_type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor has been called\n";
}

WrongAnimal::WrongAnimal( const std::string &type ):
_type(type)
{
	std::cout << "WrongAnimal Type Constructor has been called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &other ):
_type(other._type)
{
	std::cout << "WrongAnimal Copy Constructor has been called\n";
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Assin Operator has been called\n";
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called\n";
}

std::string	WrongAnimal::getType( void ) const
{
	return _type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "*Strange and unatural animal sounds*\n";
}
