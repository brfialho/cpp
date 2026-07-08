/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:40:49 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 23:03:53 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
 #define CONTACT_HPP

 class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phone;
		std::string _secret;
	public:
		Contact();
		Contact(
			std::string firstName, 
			std::string lastName, 
			std::string nickName, 
			std::string phone, 
			std::string Secret);
		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getPhone();
		std::string getSecret();
 };

#endif