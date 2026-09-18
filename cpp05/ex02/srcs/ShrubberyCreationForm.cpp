/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:57:38 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Default Constructor has been called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other )
{
	// std::cout << "ShrubberyCreationForm Copy Constructor has been called\n";
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	// std::cout << "ShrubberyCreationForm Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Destructor has been called\n";
}

