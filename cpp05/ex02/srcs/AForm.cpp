/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 21:58:53 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():
_name(""),
_target(""),
_signReqGrade(1),
_execReqGrade(1),
_isSigned(false)
{
	// std::cout << "AForm Default Constructor has been called\n";
}

AForm::AForm( const std::string &name, const std::string &target, int signReqGrade, int execReqGrade ):
_name(name),
_target(target),
_signReqGrade(signReqGrade),
_execReqGrade(execReqGrade),
_isSigned(false)
{
	if (signReqGrade < MAX_GRADE || execReqGrade < MAX_GRADE)
		throw GradeTooHighException();
	if (signReqGrade > MIN_GRADE || execReqGrade > MIN_GRADE)
		throw GradeTooLowException();
}

AForm::AForm( const AForm &other ):
_name(other._name),
_target(other._target),
_signReqGrade(other._signReqGrade),
_execReqGrade(other._execReqGrade),
_isSigned(other._isSigned)
{
	// std::cout << "AForm Copy Constructor has been called\n";
}

AForm&	AForm::operator=(const AForm& other)
{
	// std::cout << "AForm Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;

	_isSigned = other._isSigned;
}

AForm::~AForm()
{
	// std::cout << "AForm Destructor has been called\n";
}

const	std::string	&AForm::getName( void ) const
{
	return _name;
}

const	std::string	&AForm::getTarget( void ) const
{
	return _target;
}


int	AForm::getSignReqGrade ( void ) const
{
	return _signReqGrade;
}

int	AForm::getExecReqGrade ( void ) const
{
	return _execReqGrade;
}

bool	AForm::getIsSigned ( void ) const
{
	return _isSigned;
}

void	AForm::beSigned( const Bureaucrat &b )
{
	if (b.getGrade() > _signReqGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

void	AForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > _execReqGrade)
		throw GradeTooLowException();
	formAction();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

std::ostream&	operator<<(std::ostream& out, const AForm& f)
{
	// out << BOLD << f.getName() << RESET
	// 	<< " is " << (f.getIsSigned() ? "" : "not ") << "signed" 
	// 	<< ". Its sign requirement grade is " << BOLD << f.getSignReqGrade() << RESET
	// 	<< " and its execution requirement grade is " << BOLD << f.getExecReqGrade() << RESET
	// 	<< ".";
	out << BOLD << f.getName() << RESET << '\n'
		<< "Taget: " << f.getTarget() << '\n'
		<< "Status: " << (f.getIsSigned() ? "signed" : "not signed") << '\n'
		<< "Sign requirement grade: " << f.getSignReqGrade() << '\n'
		<< "Execution requirement grade: " << f.getExecReqGrade() << '\n';
	return out;
}
