/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:12:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
Animal("Cat")
{
	std::cout << "Cat Default Constructor has been called\n";
}

Cat::Cat( const Cat &other ):
Animal(other)
{
	std::cout << "Cat Copy Constructor has been called\n";
}

Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat Assign Operator has been called\n";
	if (this == &other)
		return *this;

	Animal::_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called\n";
}

void	Cat::makeSound( void ) const
{
	std::cout << "MIAAAAAAAU\n";
}