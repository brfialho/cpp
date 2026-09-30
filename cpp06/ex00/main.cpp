/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:46:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/29 22:49:48 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
		return 1;
	ScalarConverter::convert(argv[1]);
	// char n = '*';
	// int n = 348;
	// float n = 42.24;
	// double n =  2147483647.123;

	// (void)argv;
	// std::cout << std::setprecision(17);
	// std::cout << "CHAR: " << static_cast<char>(n) << '\n'
	// 	<< "INT: " << static_cast<int>(n) << '\n'
	// 	<< "F: " << static_cast<float>(n) << '\n'
	// 	<< "D: " << static_cast<double>(n) << '\n';

	// std::cout << "LD: " << sizeof(long double) << "\n"
	// 		<< "D: " << sizeof(double) << '\n'
	// 		<< "LL: " << sizeof(long long) << "\n"
	// 		<< "L: " << sizeof(long) << "\n";
}
