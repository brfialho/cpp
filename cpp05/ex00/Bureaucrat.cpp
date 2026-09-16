/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:22 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 13:30:29 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor has been called\n";
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ):
_name(name)
{
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ):
_name(other._name),
_grade(other._grade)
{
	std::cout << "Bureaucrat Copy Constructor has been called\n";
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other )
{
	std::cout << "Bureaucrat Assign operator has been called\n";
	if (this == &other)
		return *this;

	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor has been called\n";
}

const std::string	&Bureaucrat::getName( void ) const
{
	return (_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (_grade)	;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	
	return out;	
}
