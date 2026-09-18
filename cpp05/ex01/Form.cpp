/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:53:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():
_name(""),
_signReqGrade(1),
_execReqGrade(1),
_isSigned(false)
{
	// std::cout << "Form Default Constructor has been called\n";
}

Form::Form( const std::string &name, int signReqGrade, int execReqGrade ):
_name(name),
_signReqGrade(signReqGrade),
_execReqGrade(execReqGrade),
_isSigned(false)
{
	if (signReqGrade < MAX_GRADE || execReqGrade < MAX_GRADE)
		throw GradeTooHighException();
	if (signReqGrade > MIN_GRADE || execReqGrade > MIN_GRADE)
		throw GradeTooLowException();
}

Form::Form( const Form &other ):
_name(other._name),
_signReqGrade(other._signReqGrade),
_execReqGrade(other._execReqGrade),
_isSigned(other._isSigned)
{
	// std::cout << "Form Copy Constructor has been called\n";
}

Form&	Form::operator=(const Form& other)
{
	// std::cout << "Form Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;

	_isSigned = other._isSigned;
}

Form::~Form()
{
	// std::cout << "Form Destructor has been called\n";
}

const	std::string	&Form::getName( void ) const
{
	return _name;
}

int	Form::getSignReqGrade ( void ) const
{
	return _signReqGrade;
}

int	Form::getExecReqGrade ( void ) const
{
	return _execReqGrade;
}

bool	Form::getIsSigned ( void ) const
{
	return _isSigned;
}

void	Form::beSigned( const Bureaucrat &b )
{
	if (b.getGrade() > _signReqGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

std::ostream&	operator<<(std::ostream& out, const Form& f)
{
	// out << BOLD << f.getName() << RESET
	// 	<< " is " << (f.getIsSigned() ? "" : "not ") << "signed" 
	// 	<< ". Its sign requirement grade is " << BOLD << f.getSignReqGrade() << RESET
	// 	<< " and its execution requirement grade is " << BOLD << f.getExecReqGrade() << RESET
	// 	<< ".";
	out << BOLD << f.getName() << RESET << '\n'
		<< "Status: " << (f.getIsSigned() ? "signed" : "not signed") << '\n'
		<< "Sign requirement grade: " << f.getSignReqGrade() << '\n'
		<< "Execution requirement grade: " << f.getExecReqGrade() << '\n';
	return out;
}
