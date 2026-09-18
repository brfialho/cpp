/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:39:39 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

int	main ( void )
{
	Form	f("Contract from below", 10, 1);
	Form	f2("Golpe da shopee", 150, 150);
	Bureaucrat	b("Putin", 11);

	std::cout << f << '\n';
	std::cout << f2 << '\n';

	b.signForm(f2);
	b.signForm(f);

	std::cout << f << '\n';
	std::cout << f2 << '\n';
}
