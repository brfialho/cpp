/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 21:18:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150

#ifndef RED
# define RED "\033[31m"
#endif 

#ifndef RESET
# define RESET "\033[0m"
#endif

class AForm;

class	Bureaucrat {

private:
	const std::string	_name;
	int					_grade;

public:

	Bureaucrat();
	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &other );
	Bureaucrat& operator=( const Bureaucrat &other );
	~Bureaucrat();

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;

	void	upGrade( void );
	void	upGrade( int n );
	void	downGrade( void );
	void	downGrade( int n );
	void	signForm ( AForm &f );
	void	executeForm(AForm const & form) const;

	class	GradeTooHighException : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char	*what(void) const throw();
	};

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b);

#endif
