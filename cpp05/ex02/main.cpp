/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/24 18:03:25 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main ( void )
{
	// if (argc == 3 && std::string(argv[2]) == "-s")
	// 	std::string seed(argv[3]);
	
	{
		Bureaucrat	b("Roberto Carlos", 50);
		PresidentialPardonForm	fp("White House");
		RobotomyRequestForm		fr("Trump");
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

		std::cout << "\n\n";
		// std::cout << std::boolalpha;
		for (int i = 0; i < 20; i++)
			b.executeForm(fr);
	}
}


// fix assign
// implement form actions
// test ex01 bad cases if it signs