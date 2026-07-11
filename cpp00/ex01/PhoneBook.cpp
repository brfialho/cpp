/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/11 05:02:44 by brfialho         ###   ########.fr       */
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
	std::getline(std::cin, input);
	c.setFirst(input);

	std::cout << "LAST NAME: ";
	std::getline(std::cin, input);
	c.setLast(input);

	std::cout << "NICK NAME: ";
	std::getline(std::cin, input);
	c.setNick(input);

	std::cout << "PHONE: ";
	std::getline(std::cin, input);
	c.setPhone(input);

	std::cout << "DARKEST SECRET: ";
	std::getline(std::cin, input);
	c.setSecret(input);
}

void PhoneBook::printList(void)
{
	std::cout << '\n';
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICK NAME|\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
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

void	PhoneBook::search(void)
{
	std::string	input;

	if (_list[0].getFirst().empty())
	{
		std::cout << "Oops... looks like you have no contacts in your phone book yet. Try adding one first\n";
		return ;
	}
	this->printList();
	prompt:
	std::cout << "Which contact do you want more info? select by typing the index number >> ";
	std::getline(std::cin, input);
	if (input.length() != 1
	|| !(input[0] - '0' >= 0 && input[0] - '0' <= 7)
	|| _list[input[0] - '0'].getFirst().empty())
		goto prompt;
	
	std::cout << _list[input[0] - '0'].getFirst() << '\n';
	std::cout << _list[input[0] - '0'].getLast() << '\n';
	std::cout << _list[input[0] - '0'].getNick() << '\n';
	std::cout << _list[input[0] - '0'].getPhone() << '\n';
	std::cout << _list[input[0] - '0'].getSecret() << '\n';
}