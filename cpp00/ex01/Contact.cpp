/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:40:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/11 04:11:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact(void)
{}

Contact::Contact(
	std::string firstName,
	std::string lastName, 
	std::string nickName,
	std::string phone,
	std::string secret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phone = phone;
	_secret = secret;
}

std::string Contact::getFirst(void)
{
	return (_firstName);
}

std::string Contact::getLast(void)
{
	return (_lastName);
}

std::string Contact::getNick(void)
{
	return (_nickName);
}

std::string Contact::getPhone(void)
{
	return (_phone);
}

std::string Contact::getSecret(void)
{
	return (_secret);
}

void Contact::setFirst(std::string firstName)
{
	_firstName = firstName;
}

void Contact::setLast(std::string lastName)
{
	_lastName = lastName;
}

void Contact::setNick(std::string nickName)
{
	_nickName = nickName;
}

void Contact::setPhone(std::string phone)
{
	_phone = phone;
}

void Contact::setSecret(std::string secret)
{
	_secret = secret;
}
