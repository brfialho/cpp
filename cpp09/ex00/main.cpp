/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:22:45 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 15:28:12 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main ( int argc, char **argv )
{
	if (argc != 2)
		return std::cout << "usage: ./btc {input_file}\n", 1;
	(void)argv;
}
