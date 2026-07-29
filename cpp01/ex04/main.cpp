/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:52 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/29 20:30:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

bool		openFiles(std::ifstream &input, std::ofstream &output, std::string &filename);
std::string	&replace(std::string &buffer, const std::string &oldString, const std::string &newString);
// void	copyFile(std::ifstream	&input, std::ofstream &output);
// void	replaceStrings(std::ofstream &output, std::string &oldString);

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 1);

	const std::string	oldString(argv[2]);
	const std::string	newString(argv[3]);
	std::string			filename(argv[1]);
	std::ifstream		input;
	std::ofstream		output;

	if (filename.empty() || oldString.empty() || newString.empty())
		return (std::cout << "Usage:   <filename> <stringToBeReplaced> <replacementString>\n", 2);
	if (!openFiles(input, output, filename))
		return 3;
	
	std::string	buffer;

	while (std::getline(input, buffer))
		output << replace(buffer, oldString, newString) << '\n';
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

std::string	&replace(std::string &buffer, const std::string &oldString, const std::string &newString)
{
	static	size_t newLen = newString.length();
	static	size_t oldLen = oldString.length();
	std::string	copy(buffer);
	size_t		pos = 0;

	while ((pos = buffer.find(oldString, pos)) != (size_t)-1)
	{
		// std::cout << buffer.c_str() + pos << ' ' << pos << '\n';
		if (newLen > oldLen)
			buffer.resize(newLen - oldLen, newString[0] + 1);
		for (int i = 0; i < newLen; i++)
			buffer[pos + i] = newString[i];
		pos += oldLen;
	}
	(void)newString;
	return (buffer);
}
