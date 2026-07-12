/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:34:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/12 01:13:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

# define CLEAR "\033[2J\033[H"

 class PhoneBook {
	private:
		Contact		_list[8];
		std::string	_numbers_helper[9];
		std::string	_error_message[3];
		int			_error_code;
	public:
					PhoneBook();
		void		printList(void);
		void		add(void);
		void		search(void);
		void		printError(void);
		int			getError();
		void		setError(int errorCode);
 };

#endif