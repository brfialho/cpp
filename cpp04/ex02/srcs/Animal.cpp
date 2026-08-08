/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:40:31 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 20:36:11 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():
_type("Animal")
{
	std::cout << "Animal Default Constructor has been called\n";
}

Animal::Animal( const std::string &type ):
_type(type)
{
	std::cout << "Animal Type Constructor has been called\n";
}

Animal::Animal( const Animal &other ):
_type(other._type)
{
	std::cout << "Animal Copy Constructor has been called\n";
}

Animal&	Animal::operator=( const Animal& other )
{
	std::cout << "Animal Assin Operator has been called\n";
	if (this == &other)
		return *this;

	_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor has been called\n";
}

std::string	Animal::getType( void ) const
{
	return _type;
}
