/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:32:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 18:52:30 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default Constructor has been called\n";
}

Ice::Ice( const Ice &other )
{
	std::cout << "Ice Copy Constructor has been called\n";
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor has been called\n";
}

