/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 21:57:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <string>
#include <iostream>

#ifndef BOLD
# define BOLD "\033[1m"
#endif

#ifndef RESET
# define RESET "\033[0m"
#endif

class Bureaucrat;

class	AForm {

private:
	const	std::string	_name;
	const	std::string	_target;
	const	int			_signReqGrade;
	const	int			_execReqGrade;
	bool				_isSigned;

public:
	AForm();
	AForm( const std::string &name, const std::string &target, int signReqGrade, int execReqGrade );
	AForm( const AForm &other );
	AForm& operator=( const AForm &other );
	virtual	~AForm();

	const	std::string	&getName( void ) const;
	const	std::string	&getTarget( void ) const;
	int					getSignReqGrade ( void ) const;
	int					getExecReqGrade ( void ) const;
	bool				getIsSigned( void ) const;

	void				beSigned( const Bureaucrat &b );
	void				execute( Bureaucrat const & executor ) const;
	virtual	void		formAction( void ) const = 0;

	class	GradeTooHighException : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char	*what(void) const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const AForm& f);

#endif
