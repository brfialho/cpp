/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:22:45 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 17:04:39 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Date.hpp"

int main ( int argc, char **argv )
{
	if (argc != 2)
		return std::cout << "usage: ./btc {input_file}\n", 1;
	(void)argv;

	Date	d("2010-03-03", '-');
	Date	f("2010-03-03", '-');

	try {
		std::cout << std::boolalpha;
		d.changeDate(argv[1]);
		std::cout << d << '\n';
		std::cout << (d > f) << '\n';
	}
	catch (Date::IDateException	&e)	{
		std::cout << e.what() << '\n';
	}

}
