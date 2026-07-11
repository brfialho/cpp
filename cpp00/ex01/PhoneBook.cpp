/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/11 03:52:01 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	_numbers_helper[0] = "ZERO      ";
	_numbers_helper[1] = "ONE       ";
	_numbers_helper[2] = "TWO       ";
	_numbers_helper[3] = "FOUR      ";
	_numbers_helper[4] = "FIVE      ";
	_numbers_helper[5] = "SIX       ";
	_numbers_helper[6] = "SEVEN     ";
	_numbers_helper[7] = "EIGHT     ";
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

void PhoneBook::add(void)
{
	Contact		c;
	static int	i = 0;

	if (i > 7)
		i = 0;

	get_info(c);
	_list[i++] = c;
}

std::string	format_string(std::string s)
{
	std::string	formated;

	formated = s;
	if (formated.length() > 10)
	{
		formated.resize(10);
		formated[9] = '.';
	}
	else
		formated.resize(10, ' ');
	return (formated);
}

void PhoneBook::printList(void)
{
	std::cout << '\n';
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICK NAME |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
		std::cout << '|' << _numbers_helper[i] << '|' << format_string(_list[i].getFirst()) << '|' << format_string(_list[i].getLast()) << '|' << format_string(_list[i].getNick()) << '|' << '\n';
		
	std::cout << "+-------------------------------------------+";
}
