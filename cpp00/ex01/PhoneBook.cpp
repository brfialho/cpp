/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/11 04:16:22 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void	get_info(Contact &c);
static std::string	format_string(std::string s);

PhoneBook::PhoneBook(void)
{
	_numbers_helper[0] = "      zero";
	_numbers_helper[1] = "       one";
	_numbers_helper[2] = "       two";
	_numbers_helper[3] = "      four";
	_numbers_helper[4] = "      five";
	_numbers_helper[5] = "       six";
	_numbers_helper[6] = "     seven";
	_numbers_helper[7] = "     eight";
}

void PhoneBook::add(void)
{
	Contact		c;
	static int	i = 0;

	if (i > 7)
		i = 0;

	get_info(c);
	_list[i++] = c;
}

static void	get_info(Contact &c)
{
	std::string input;

	std::cout << "FIRST NAME: ";
	// std::cin >> input;
	std::getline(std::cin, input);
	c.setFirst(input);

	std::cout << "LAST NAME: ";
	// std::cin >> input;
	std::getline(std::cin, input);
	c.setLast(input);

	std::cout << "NICK NAME: ";
	// std::cin >> input;
	std::getline(std::cin, input);
	c.setNick(input);

	std::cout << "PHONE: ";
	// std::cin >> input;
	std::getline(std::cin, input);
	c.setPhone(input);

	std::cout << "DARKEST SECRET: ";
	// std::cin >> input;
	std::getline(std::cin, input);
	c.setSecret(input);
}

void PhoneBook::printList(void)
{
	if (_list[0].getFirst().empty())
		return ;
	std::cout << '\n';
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICK NAME|\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
		// if (!_list[i].getFirst().empty())
			std::cout << '|' << _numbers_helper[i] << '|' << format_string(_list[i].getFirst()) << '|' << format_string(_list[i].getLast()) << '|' << format_string(_list[i].getNick()) << '|' << '\n';
	std::cout << "+-------------------------------------------+\n";
}

static std::string	format_string(std::string s)
{
	std::string	formated;

	formated = s;
	if (formated.length() > 10)
	{
		formated.resize(10);
		formated[9] = '.';
	}
	else
		for (int i = formated.length(); i < 10; i++ )
			formated.insert(0, 1, 32);
	return (formated);
}
