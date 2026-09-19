/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/19 20:03:49 by brfialho         ###   ########.fr       */
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
		PresidentialPardonForm	fp("White House");
		RobotomyRequestForm		fr("Robot Factory");
		ShrubberyCreationForm	fs("Idk");

		std::cout << fp << '\n'
				<< fr << '\n'
				<< fs << '\n';

		std::cout << b << '\n';
		b.signForm(fp);
		b.signForm(fr);
		b.signForm(fs);

		std::cout << fp << '\n'
				<< fr << '\n'
				<< fs << '\n';

		b.executeForm(fp);
		b.executeForm(fr);
		b.executeForm(fs);

		b.upGrade(49);

		std::cout << b << '\n';
		b.executeForm(fr);
		b.signForm(fs);
		b.executeForm(fs);
	}
}


// fix assign
// think about no signed excep
// implement form actions
// test ex01 bad cases if it signs