/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 20:47:24 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 21:20:13 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <string>

Contacts::Contacts(void)
{
	_firstName = "NULL";
	_lastName = "NULL";
	_nickName = "NULL";
	_phone = "NULL";
	_secret = "NULL";
}

Contacts::Contacts(
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

std::string Contacts::getFirst(void)
{
	return (_firstName);
}

std::string Contacts::getLast(void)
{
	return (_lastName);
}

std::string Contacts::getNick(void)
{
	return (_nickName);
}

std::string Contacts::getPhone(void)
{
	return (_phone);
}

std::string Contacts::getSecret(void)
{
	return (_secret);
}

void Contacts::setFirst(std::string firstName)
{
	_firstName = firstName;
}

void Contacts::setLast(std::string lastName)
{
	_lastName = lastName;
}

void Contacts::setNick(std::string nickName)
{
	_nickName = nickName;
}

void Contacts::setPhone(std::string phone)
{
	_phone = phone;
}

void Contacts::setSecret(std::string secret)
{
	_secret = secret;
}
