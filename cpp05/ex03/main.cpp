/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/28 00:17:56 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main ( void )
{
	Intern::addForm("robotomy request", RobotomyRequestForm::createForm);
	Intern::addForm("presidential pardon", PresidentialPardonForm::createForm);
	Intern::addForm("shrubbery creation", ShrubberyCreationForm::createForm);
	Intern	i;
	AForm	*form;

	{
		Bureaucrat	b("Urso da Coca-Cola", 1);
	
		form = i.makeForm("robotomy request", "Papai Noel");
		std::cout << *form << '\n';
		b.signForm(*form);
		b.executeForm(*form);
		std::cout << '\n';
		delete form;
	}

	{
		Bureaucrat	b("Urso da Coca-Cola", 1);
	
		form = i.makeForm("presidential pardon", "Papai Noel");
		std::cout << *form << '\n';
		b.signForm(*form);
		b.executeForm(*form);
		std::cout << '\n';
		delete form;
	}

	{
		Bureaucrat	b("Urso da Coca-Cola", 1);
	
		form = i.makeForm("shrubbery creation", "Polo Norte");
		std::cout << *form << '\n';
		b.signForm(*form);
		b.executeForm(*form);
		std::cout << '\n';
		delete form;
	}

	try
	{
		form = i.makeForm("Not a form", "Polo Norte");
	}
	catch (Intern::IInternException &e)
	{
		std::cout << RED << "error: " << e.what() << RESET << '\n';
	}
}
