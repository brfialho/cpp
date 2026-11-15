/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:42:30 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 21:49:39 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main ( int argc, char **argv )
{
	if (argc != 2)
		return std::cout << "usage: ./RPN {reverse polish expression}\n", 1;
	(void)argv;
}
