/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 23:54:34 by brfialho         ###   ########.fr       */
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

	{
		Bureaucrat	b("Urso da Coca-Cola", 1);
		Intern	i;
	
		AForm	*form;
		form = i.makeForm("robotomy request", "Papai Noel");
		std::cout << *form << '\n';
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
}
