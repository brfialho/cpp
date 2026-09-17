/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/17 14:29:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>

#ifndef MAX_GRADE
# define MAX_GRADE 1
#endif

#ifndef MIN_GRADE
# define MIN_GRADE 150
#endif

#ifndef BOLD
# define BOLD "\033[1m"
#endif

#ifndef RESET
# define RESET "\033[0m"
#endif

class	Form {

private:
	const	std::string	_name;
	const	int			_signReqGrade;
	const	int			_execReqGrade;
	bool				_isSigned;

public:
	Form();
	Form( const std::string &name, int signReqGrade, int execReqGrade );
	Form( const Form &other );
	Form& operator=( const Form &other );
	~Form();

	const	std::string	&getName( void ) const;
	int					getSignReqGrade ( void ) const;
	int					getExecReqGrade ( void ) const;
	bool				getIsSigned( void ) const;

	class	GradeTooHighException : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char	*what(void) const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& f);

#endif
