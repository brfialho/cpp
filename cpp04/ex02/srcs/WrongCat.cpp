/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:17:22 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:28:20 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():
WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor has been called\n";
}

WrongCat::WrongCat( const WrongCat &other ):
WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor has been called\n";
}

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat Assign Operator has been called\n";
	if (this == &other)
		return *this;

	WrongAnimal::_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor has been called\n";
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong MIAAAAAAAU\n";
}