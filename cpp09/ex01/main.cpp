/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:42:30 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 23:33:33 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main ( int argc, char **argv )
{
	if (argc != 2 || !argv[1][0])
		return std::cout << "usage: ./RPN {reverse polish expression}\n", 1;
	try {
		RPN::evaluateExpression(argv[1]);
	}
	catch (std::exception &e) {
		std::cout << "rpn: error: " << e.what() << '\n';
		return 1;
	}
}
