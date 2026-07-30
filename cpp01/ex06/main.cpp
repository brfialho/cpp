/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 23:40:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/30 00:53:30 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv )
{
	if (argc != 2)
		return (std::cout << "Usage: ./harlFilter <level>\n", 1);

	Harl	h;

	h.complain(std::string(argv[1]));
}
