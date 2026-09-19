/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:55:04 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 19:05:02 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main ( void )
{
	AForm	f("Contract from below", 10, 1);
	AForm	f2("Golpe da shopee", 150, 150);
	Bureaucrat	b("Putin", 11);

	std::cout << f << '\n';
	std::cout << f2 << '\n';

	b.signForm(f);
	b.signForm(f2);

	std::cout << f << '\n';
	std::cout << f2 << '\n';
}
