/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 20:47:24 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 21:10:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <string>

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