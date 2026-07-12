/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/12 02:08:47 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static std::string	get_info(std::string prompt);
static std::string	format_string(std::string s);

PhoneBook::PhoneBook(void)
{
	_numbers_helper[0] = "     0    ";
	_numbers_helper[1] = "     1    ";
	_numbers_helper[2] = "     2    ";
	_numbers_helper[3] = "     3    ";
	_numbers_helper[4] = "     4    ";
	_numbers_helper[5] = "     5    ";
	_numbers_helper[6] = "     6    ";
	_numbers_helper[7] = "     7    ";
	_error_message[1] = "ERROR: Wrong usage, please type the desired option by index then press ENTER\n\n";
	_error_message[2] = "ERROR: Oops... looks like you have no contacts in your phone book yet. Try adding one first\n\n";
	_error_code = 0;
}

int PhoneBook::getError(void)
{
	return (_error_code);
}

void PhoneBook::setError(int errorCode)
{
	_error_code = errorCode;
}

void	PhoneBook::printError(void)
{
	std::cout << _error_message[_error_code];
}

void PhoneBook::add(void)
{
	Contact		c;
	static int	i = 0;

	if (i > 7)
		i = 0;
	c.setFirst(get_info("FIRST NAME: "));
	c.setLast(get_info("LAST NAME: "));
	c.setNick(get_info("NICK NAME: "));
	c.setPhone(get_info("PHONE: "));
	c.setSecret(get_info("DARKEST SECRET: "));
	_list[i++] = c;
}

static std::string	get_info(std::string prompt)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << CLEAR;
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void PhoneBook::printList(void)
{
	std::cout << CLEAR;
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
		std::cout << CLEAR;
		_error_code = 2;
		return ;
	}
	prompt:
	this->printList();
	std::cout << "Which contact do you want more info? Select by typing the index number or 'Q' to go to MENU\n\n";
	std::getline(std::cin, input);
	if (input == "q" || input == "Q")
		return ;
	if (input.length() != 1
	|| !(input[0] - '0' >= 0 && input[0] - '0' <= 7)
	|| _list[input[0] - '0'].getFirst().empty())
	{
		std::cout << CLEAR;
		goto prompt;
	}
	std::cout << '\n' << "FIRST NAME     :"<< _list[input[0] - '0'].getFirst() << '\n';
	std::cout << "LAST NAME      :" << _list[input[0] - '0'].getLast() << '\n';
	std::cout << "NICKNAME       :" << _list[input[0] - '0'].getNick() << '\n';
	std::cout << "PHONE          :" << _list[input[0] - '0'].getPhone() << '\n';
	std::cout << "DARKEST SECRET :" << _list[input[0] - '0'].getSecret() << '\n';
	std::cout << "\nPress ENTER to go back to MENU";
	std::getline(std::cin, input);
}
