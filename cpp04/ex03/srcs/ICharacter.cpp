/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:32:16 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 18:52:34 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter Default Constructor has been called\n";
}

ICharacter::ICharacter( const ICharacter &other )
{
	std::cout << "ICharacter Copy Constructor has been called\n";
}

ICharacter&	ICharacter::operator=(const ICharacter& other)
{
	std::cout << "ICharacter Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter Destructor has been called\n";
}

