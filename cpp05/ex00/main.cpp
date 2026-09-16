/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 16:03:28 by brfialho         ###   ########.fr       */
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
	// catch (std::exception &e)
	// {
	// 	std::cout << RED "error: "<< e.what() << RESET "\n";
	// 	return 1;
	// }

	a.upGrade();
	b.downGrade();
	std::cout << a << '\n' << b << '\n';
	try
	{
		// a.downGrade(2);
		b.upGrade(2);
	}
	catch (std::exception &e)
	{
		std::cout << RED "error: "<< e.what() << RESET "\n";
		return 2;
	}

}
