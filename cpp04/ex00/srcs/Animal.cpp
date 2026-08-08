/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:40:31 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 15:40:32 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{}

Animal::Animal( const Animal &other )
{}

Animal&	Animal::operator=( const Animal& other )
{
	if (this == &other)
		return *this;
	return *this;
}

Animal::~Animal()
{}

