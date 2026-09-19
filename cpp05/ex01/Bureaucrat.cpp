/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:22 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 22:29:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():
_name(""),
_grade(MIN_GRADE)
{
	// std::cout << "Bureaucrat Default Constructor has been called\n";
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ):
_name(name),
_grade(grade)
{
	// std::cout << "Bureaucrat name/grade Constructor has been called\n";

	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ):
_name(other._name),
_grade(other._grade)
{
	// std::cout << "Bureaucrat Copy Constructor has been called\n";
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other )
{
	// std::cout << "Bureaucrat Assign operator has been called\n";
	if (this == &other)
		return *this;

	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor has been called\n";
}

const std::string	&Bureaucrat::getName( void ) const
{
	return (_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (_grade)	;
}

void	Bureaucrat::upGrade( void )
{
	--_grade;
	if (_grade < MAX_GRADE)
		throw GradeTooHighException();
}

void	Bureaucrat::upGrade( int n )
{
	_grade -= n;
	if (_grade < MAX_GRADE)
		throw GradeTooHighException();
}

void	Bureaucrat::downGrade( void )
{
	++_grade;
	if (_grade > MIN_GRADE)
		throw GradeTooLowException();
}

void	Bureaucrat::downGrade( int n )
{
	_grade += n;
	if (_grade > MIN_GRADE)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm ( Form &f )
{
	try
	{
		f.beSigned( *this );
	}
	catch (Form::GradeTooLowException &e)
	{
		// std::cout << RED << "error: " << e.what() << RESET << '\n';
		std::cout << _name << " couldn't sign " << f.getName() << " because he is not qualified." << '\n';
		return;
	}
	std::cout << _name << " signed " << f.getName() << '\n';
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("grade too low");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	
	return out;	
}
