/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:52 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/29 19:57:29 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

bool	openFiles(std::ifstream &input, std::ofstream &output, std::string &filename);
// void	copyFile(std::ifstream	&input, std::ofstream &output);
// void	replaceStrings(std::ofstream &output, std::string &oldString);

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 1);

	std::string		filename(argv[1]);
	std::string		oldString(argv[2]);
	std::string		newString(argv[3]);
	std::ifstream	input;
	std::ofstream	output;

	if (filename.empty() || oldString.empty() || newString.empty())
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 2);
	if (!openFiles(input, output, filename))
		return 3;
	
	std::string	buffer;

	while (std::getline(input, buffer))
		output << buffer << '\n';
}

bool	openFiles(std::ifstream &input, std::ofstream &output, std::string &filename)
{
	input.open(filename.c_str());
	if (!input)
		return (std::cout << "Bad file\n", false);
	output.open((filename.append(".replace")).c_str());
	if (!output)
		return (input.close(), std::cout << "could not create " << filename << '\n', false);
	return (true);
}

// void	copyFile(std::ifstream	&input, std::ofstream &output)
// {
// 	std::string	buffer;

// 	while (std::getline(input, buffer))
// 		output << buffer << '\n';
// }
