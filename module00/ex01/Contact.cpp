/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:40:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 22:08:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact(void)
{
	_firstName = "NULL";
	_lastName = "NULL";
	_nickName = "NULL";
	_phone = "NULL";
	_secret = "NULL";
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
