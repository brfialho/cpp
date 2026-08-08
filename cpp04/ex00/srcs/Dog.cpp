/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:07 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:07:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
Animal("Dog")
{
	std::cout << "Dog Default Constructor has been called\n";
}

Dog::Dog( const Dog &other ):
Animal(other)
{
	std::cout << "Dog Copy Constructor has been called\n";
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assign Operator has been called\n";
	if (this == &other)
		return *this;

	Animal::_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor has been called\n";
}

void	Dog::makeSound( void )
{
	std::cout << "AUAUAUAU!\n";
}
