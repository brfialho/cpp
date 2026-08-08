/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:07 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 15:41:07 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{}

Dog::Dog( const Dog &other )
{}

Dog&	Dog::operator=( const Dog& other )
{
	if (this == &other)
		return *this;
	return *this;
}

Dog::~Dog()
{}

