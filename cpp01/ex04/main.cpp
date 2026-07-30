/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:52 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/29 23:04:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

bool		openFiles(std::ifstream &input, std::ofstream &output, std::string &filename);
std::string	&processDumpFile(std::string &dumpFile, const std::string &oldString, const std::string &newString);

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 1);

	const std::string	oldString(argv[2]);
	const std::string	newString(argv[3]);
	std::string			filename(argv[1]);
	std::ifstream		input;
	std::ofstream		output;
	std::string			dumpFile;
	std::string			buffer;

	if (filename.empty() || oldString.empty())
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 2);
	if (!openFiles(input, output, filename))
		return 3;

	while (std::getline(input, buffer))
		dumpFile.append(buffer + "\n");
	output << processDumpFile(dumpFile, oldString, newString);
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

std::string	&processDumpFile(std::string &dumpFile, const std::string &oldString, const std::string &newString)
{
	size_t	pos = 0;

	while((pos = dumpFile.find(oldString)) != std::string::npos)
	{
		dumpFile.erase(pos, oldString.length());
		dumpFile.insert(pos, newString);
		pos += newString.length();
	}

	return dumpFile;
}

// std::string	getNewDumpFile(std::string &oldDumpFile, const std::string &oldString, const std::string &newString)
// {
// 	std::string	newDump;

// 	newDump.reserve(oldDumpFile.length());
// 	for (size_t i = 0; oldDumpFile[i]; i++)
// 	{
// 		if (!oldDumpFile.compare(i, oldString.length(), oldString))
// 		{
// 			newDump.append(newString);
// 			i += oldString.length() - 1;
// 			continue;
// 		}
// 		newDump.push_back(oldDumpFile[i]);
// 	}

// 	return newDump;
// }
