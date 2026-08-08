/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:07 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:26:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
Animal("Dog"),
_brain(new Brain("DOG IDEA"))
{
	std::cout << "Dog Default Constructor has been called\n";
}

Dog::Dog( const Dog &other ):
Animal(other),
_brain(new Brain(*other._brain))
{
	std::cout << "Dog Copy Constructor has been called\n";
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Assign Operator has been called\n";
	if (this == &other)
		return *this;

	delete	_brain;

	Animal::_type = other._type;
	_brain = new Brain(*other._brain);

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor has been called\n";
	delete	_brain;
}

Brain	*&Dog::getBrain( void )
{
	return (_brain);	
}

void	Dog::makeSound( void ) const
{
	std::cout << "AUAUAUAU\n";
}
