/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:22 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 12:56:22 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor has been called\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat &other )
{
	std::cout << "Bureaucrat Copy Constructor has been called\n";
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other )
{
	std::cout << "Bureaucrat Assign operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor has been called\n";
}

