/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 15:41:01 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{}

Cat::Cat( const Cat &other )
{}

Cat&	Cat::operator=( const Cat& other )
{
	if (this == &other)
		return *this;
	return *this;
}

Cat::~Cat()
{}

