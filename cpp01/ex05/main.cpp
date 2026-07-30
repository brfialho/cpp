/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 23:40:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/30 00:29:41 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl	h;

	h.complain("INFO");
	h.complain("");
	h.complain("ERROR");
	h.complain("NADA HAVER");
	h.complain("INFO");
	h.complain("DEBUG");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("ERRADO");

	std::string	input;

	while (true)
	{
		std::cout << "try yourself: ";
		std::cin >> input;
		if (input.compare("q") == 0 || input.compare("Q") == 0)
			break;
		h.complain(input);
	}
	std::cout << "BYE\n";
}