/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:52 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/29 23:34:43 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

bool		openFiles(std::ifstream &input, std::ofstream &output, std::string &filename);
std::string	processDumpFile(std::string dumpFile, const std::string &oldString, const std::string &newString);

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 1);

	const std::string	oldString(argv[2]);
	const std::string	newString(argv[3]);
	std::string			filename(argv[1]);
	std::ifstream		input;
	std::ofstream		output;
	std::stringstream	dumpFile;

	if (filename.empty() || oldString.empty())
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 2);
	if (!openFiles(input, output, filename))
		return 3;

	dumpFile << input.rdbuf();
	output << processDumpFile(dumpFile.str(), oldString, newString);
}

bool	openFiles(std::ifstream &input, std::ofstream &output, std::string &filename)
{
	input.open(filename.c_str());
	if (!input)
		return (std::cout << "Bad file\n", false);
	output.open((filename.append(".replace")).c_str());
	if (!output)
		return (input.close(), std::cout << "could not create " << filename << '\n', false);
	return true;
}

std::string	processDumpFile(std::string dumpFile, const std::string &oldString, const std::string &newString)
{
	size_t	pos = 0;

	while((pos = dumpFile.find(oldString, pos)) != std::string::npos)
	{
		dumpFile.erase(pos, oldString.length());
		dumpFile.insert(pos, newString);
		pos += newString.length();
	}
	return dumpFile;
}
