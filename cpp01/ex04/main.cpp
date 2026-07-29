/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:52 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/29 19:36:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

#ifndef ERROR_MESSAGE
#define ERROR_MESSAGE "Usage:   <filename> <stringToBeReplaced> <replacementString>\n"
#endif

void	copyFile(std::ifstream	&input, std::ofstream &output);

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << ERROR_MESSAGE, 1);

	std::string		filename(argv[1]);
	std::string		oldString(argv[2]);
	std::string		newString(argv[3]);
	std::ifstream	input;
	std::ofstream	output;

	if (filename.empty() || oldString.empty() || newString.empty())
		return (std::cout << ERROR_MESSAGE, 2);

	input.open(filename.c_str());
	if (!input)
		return (std::cout << "Bad file\n", 3);
	output.open((filename.append(".replace")).c_str());
	if (!output)
		return (input.close(), std::cout << "could not create " << filename << '\n', 4);

	copyFile(input, output);
	// replaceWords(output, oldString, newString);

	input.close();
	output.close();
}

void	copyFile(std::ifstream	&input, std::ofstream &output)
{
	std::string	buffer;

	// input >> std::noskipws;
	while (std::getline(input, buffer))
		output << buffer << '\n';
	// input >> std::skipws;
}
