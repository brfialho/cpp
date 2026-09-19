/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 22:38:44 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main ( void )
{
	
	{
		Bureaucrat	b("Roberto Carlos", 50);
		PresidentialPardonForm	fp("Casa branca");
		RobotomyRequestForm		fr("Fabcrica de robos");
		ShrubberyCreationForm	fs("shurberry");

		std::cout << fp << '\n';
		std::cout << fr << '\n';
		std::cout << fs << '\n';

		b.signForm(fp);
		b.signForm(fr);
		b.signForm(fs);

		std::cout << fp << '\n';
		std::cout << fr << '\n';
		std::cout << fs << '\n';

		b.executeForm(fp);
		b.executeForm(fr);
		b.executeForm(fs);
	}
}


// fix assign
// think about no signed excep
// implement form actions
// test ex01 bad cases if it signs