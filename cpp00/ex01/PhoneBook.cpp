/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/08 01:07:30 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
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

void PhoneBook::printList(void)
{
	std::cout << "index | first name | last name | nickname\n";
	for (int i = 0; i < 8; i++)
		std::cout << i << '|' << _list[i].getFirst() << '|' << _list[i].getLast() << '|' << _list[i].getNick() << '\n'; 
}
