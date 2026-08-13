/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:32:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 18:52:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Default Constructor has been called\n";
}

Cure::Cure( const Cure &other )
{
	std::cout << "Cure Copy Constructor has been called\n";
}

Cure&	Cure::operator=(const Cure& other)
{
	std::cout << "Cure Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor has been called\n";
}

