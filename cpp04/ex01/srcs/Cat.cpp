/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:39:53 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
Animal("Cat"),
_brain(new Brain("CAT IDEA"))
{
	std::cout << "Cat Default Constructor has been called\n";
}

Cat::Cat( const Cat &other ):
Animal(other),
_brain(new Brain(*other._brain))
{
	std::cout << "Cat Copy Constructor has been called\n";
}

Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat Assign Operator has been called\n";
	if (this == &other)
		return *this;

	delete	_brain;

	_brain = new Brain(*other._brain);
	Animal::_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called\n";
	delete _brain;
}

Brain	*&Cat::getBrain( void )
{
	return (_brain);	
}

void	Cat::makeSound( void ) const
{
	std::cout << "MIAAAAAAAU\n";
}