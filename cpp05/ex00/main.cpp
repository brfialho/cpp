/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 15:26:56 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

int	main ( void )
{
	Bureaucrat a("Napoleão", 150);
	Bureaucrat b("Dom Joao", 1);

	std::cout << a << '\n' << b << "\n\n";

	// try
	// {
	// 	Bureaucrat c("Dom Pedro II", 0);
	// 	Bureaucrat d("Dom Pedro III", 151);
	// }
	// catch(int err)
	// {
	// 	std::cout << RED "Error: ";
	// 	switch (err)
	// 	{
	// 		case (Bureaucrat::GradeTooHighException):
	// 			std::cout << "GradeTooHighException\n" RESET;
	// 			break;
	// 		case (Bureaucrat::GradeTooLowException):
	// 			std::cout << "GradeTooLowException\n" RESET;
	// 			break;
	// 		default:
	// 			std::cout << "Unknow\n" RESET;
	// 	}
	// 	return err;
	// }
	

	std::cout << a << '\n' << b << '\n';
	// Bureaucrat c("Dom Pedro II", 0);
	// Bureaucrat d("Dom Pedro III", 151);
	// catch(int err)
	// {
	// 	std::cerr << RED "Error: " << (err == Bureaucrat::GradeTooHighException ? "GradeTooHighException" : "GradeTooLowException") << RESET "\n";
	// 	return err;
	// }
}
