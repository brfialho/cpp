/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:32:57 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 17:32:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain( const Brain &other )
{}

Brain&	Brain::operator=( const Brain& other )
{
	if (this == &other)
		return *this;
	return *this;
}

Brain::~Brain()
{}

