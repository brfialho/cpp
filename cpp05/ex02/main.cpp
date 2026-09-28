/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 22:04:08 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main ( void )
{
	{
		Bureaucrat				b("Roberto Carlos", 50);
		PresidentialPardonForm	fp("Putin");
		RobotomyRequestForm		fr("Trump");
		ShrubberyCreationForm	fs("Trees");

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

		// std::cout << "\n\n";
		// std::cout << std::boolalpha;
		// for (int i = 0; i < 20; i++)
		// 	b.executeForm(fr);
	}
}
