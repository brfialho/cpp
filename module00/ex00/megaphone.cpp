/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:53:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/06/09 21:18:16 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	for (int i = 1; i < argc; i++)
	{
		int j = -1;
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j]);
		std::cout << ' ';
	}
	std::cout << '\n';
}
