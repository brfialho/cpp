/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:24:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 23:56:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>

#define MAX_FORMS 100

class	AForm;

class	Intern {

private:
	static AForm			*(*forms[MAX_FORMS])( const std::string & );
	static std::string		formNames[MAX_FORMS];

public:
	static void	addForm( const std::string &name, AForm	*(*f)( const std::string &target));

	Intern();
	Intern( const Intern &other );
	Intern& operator=( const Intern &other );
	~Intern();

	AForm	*makeForm( const std::string &name, const std::string & ) const;

	class	IInternException : public std::exception {
		public:
			const char	*what(void) const throw() = 0;
	};

	class	InternExceptionInvalidName : public IInternException {
		public:
			const char	*what(void) const throw();
	};

		class	InternExceptionTooManyForms : public IInternException {
		public:
			const char	*what(void) const throw();
	};
};

#endif
