/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/24 17:33:31 by brfialho         ###   ########.fr       */
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

#ifndef	DEFAULT_SEED
#define	DEFAULT_SEED 1234567890
#endif

class Bureaucrat;

class	AForm {

private:
	// static long			seed;

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

	// void				setSeed( const std::string &s ) const;

	const	std::string	&getName( void ) const;
	const	std::string	&getTarget( void ) const;
	int					getSignReqGrade ( void ) const;
	int					getExecReqGrade ( void ) const;
	bool				getIsSigned( void ) const;

	void				beSigned( const Bureaucrat &b );
	void				execute( Bureaucrat const & executor ) const;
	virtual	void		formAction( void ) const = 0;

	class	IFormException : public std::exception {
		public:
			const char	*what(void) const throw() = 0;
	};

	class	GradeTooHighException : public IFormException {
		public:
			const char	*what(void) const throw();
	};

	class	GradeTooLowException : public IFormException {
		public:
			const char	*what(void) const throw();
	};

	class	NotSignedException : public IFormException {
		public:
			const char	*what(void) const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const AForm& f);

#endif
