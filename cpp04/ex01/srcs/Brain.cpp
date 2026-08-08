/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:39:09 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:08:27 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor has been called\n";
	for (int i = 0; i < IDEAS; i++)
		_ideas[i] = "EMPTY";
}

Brain::Brain( const Brain &other ):
_ideas(other._ideas)
{
	std::cout << "Brain Copy Constructor has been called\n";
}

Brain&	Brain::operator=( const Brain& other )
{
	std::cout << "Brain Assign operator has been called\n";
	if (this == &other)
		return *this;

	for (int i = 0; i < IDEAS; i++)
		_ideas[i] = other._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called\n";
}

void	Brain::setIdeas( const std::string &idea )
{
	for (int i = 0; i < IDEAS; i++)
		_ideas[i] = idea;
}

bool	Brain::setIdeas( const std::string &idea, unsigned int i )
{
	if (i > IDEAS - 1)
		return false;

	_ideas[i] = idea;
	return true;
}

void	Brain::printIdeas( void ) const
{
	std::cout << _ideas <<'\n';
	for (int i = 0; i < IDEAS; i++)
		std::cout << _ideas[i] << '\n';
}
