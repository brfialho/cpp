/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:34:55 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 21:20:59 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACTS_HPP
 #define CONTACTS_HPP

 class Contacts
 {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phone;
		std::string _secret;
	public:
		Contacts();
		Contacts(
			std::string firstName, 
			std::string lastName, 
			std::string nickName, 
			std::string phone, 
			std::string darkestSecret);
		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getPhone();
		std::string getSecret();
		void setFirst(std::string firstName);
		void setLast(std::string lastName);
		void setNick(std::string nickName);
		void setPhone(std::string phone);
		void setSecret(std::string darkestSecret);
 };

#endif