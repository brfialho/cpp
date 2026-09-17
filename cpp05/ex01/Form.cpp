/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/17 13:55:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
_name(""),
_signReqGrade(1),
_execReqGrade(1)
{
	// std::cout << "Form Default Constructor has been called\n";
}

Form::Form( const std::string &name, int signReqGrade, int execReqGrade ):
_name(name),
_signReqGrade(signReqGrade),
_execReqGrade(execReqGrade)
{
	
}

Form::Form( const Form &other ):
_name(other._name),
_signReqGrade(other._signReqGrade),
_execReqGrade(other._execReqGrade)
{
	// std::cout << "Form Copy Constructor has been called\n";
}

Form&	Form::operator=(const Form& other)
{
	// std::cout << "Form Assignment Operator has been called\n";
	if (this == &other)
		return *this;
	return *this;
}

Form::~Form()
{
	// std::cout << "Form Destructor has been called\n";
}

