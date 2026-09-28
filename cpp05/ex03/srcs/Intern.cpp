/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:24:07 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 23:55:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm		*(*Intern::forms[MAX_FORMS])( const std::string & ) = {0};
std::string	Intern::formNames[MAX_FORMS];

void	Intern::addForm( const std::string &name, AForm	*(*f)( const std::string &))
{
	if (name.empty())
		throw InternExceptionInvalidName();

	int	i = 0;
	while (i < MAX_FORMS && forms[i] != NULL)
		++i;
	if (i == MAX_FORMS)
		throw InternExceptionTooManyForms();

	forms[i] = f;
	formNames[i] = name;
}

Intern::Intern()
{
	// std::cout << "Intern Default Constructor has been called\n";
}

Intern::Intern( const Intern &other )
{
	(void)other;
	// std::cout << "Intern Copy Constructor has been called\n";
}

Intern&	Intern::operator=(const Intern& other)
{
	// std::cout << "Intern Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	return *this;
}

Intern::~Intern()
{
	// std::cout << "Intern Destructor has been called\n";
}

AForm	*Intern::makeForm( const std::string &name, const std::string &target ) const
{
	int i = 0;

	while (i < MAX_FORMS && forms[i] && formNames[i] != name)
		i++;
	if (i == MAX_FORMS || forms[i] == NULL)
		throw InternExceptionInvalidName();
	return (forms[i](target));
}

const char	*Intern::InternExceptionInvalidName::what(void) const throw()
{
	return ("invalid form name");
}

const char	*Intern::InternExceptionTooManyForms::what(void) const throw()
{
	return ("form limit reached");
}
