/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:28 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 22:17:08 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Default Constructor has been called\n";
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
AForm("PresidentialPardonForm", target, 145, 137)
{
// std::cout << "PresidentialPardonForm target Constructor has been called\n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ):
AForm(other)
{
	// std::cout << "PresidentialPardonForm Copy Constructor has been called\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	// std::cout << "PresidentialPardonForm Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	AForm::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Destructor has been called\n";
}

void		PresidentialPardonForm::formAction( void ) const
{
	std::cout << "PRESIDENT\n";
}