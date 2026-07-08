/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:42:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 23:02:13 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
}

void PhoneBook::add(Contact contact)
{
	static int i = 0;

	if (i > 7)
		i = 0;
	_list[i++] = contact;
}

void PhoneBook::printList(void)
{
	std::cout << "index | first name | last name | nickname\n";
	for (int i = 0; i < 8; i++)
		std::cout << i << '|' << _list[i].getFirst() << '|' << _list[i].getLast() << '|' << _list[i].getNick() << '\n'; 
}
