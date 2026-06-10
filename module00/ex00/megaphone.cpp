/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:53:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/06/09 21:35:59 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	for (int i = 1; i < argc; i++)
		for (size_t j = 0; j < std::string(argv[i]).length(); j++)
			std::cout << (char)std::toupper(argv[i][j]);
	std::cout << '\n';
}
