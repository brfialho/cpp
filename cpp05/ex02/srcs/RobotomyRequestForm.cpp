/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:32 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/19 20:51:39 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Default Constructor has been called\n";
}

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ):
AForm("RobotomyRequestForm", target, 72, 45)
{
// std::cout << "RobotomyRequestForm target Constructor has been called\n";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ):
AForm(other)
{
	// std::cout << "RobotomyRequestForm Copy Constructor has been called\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	// std::cout << "RobotomyRequestForm Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	AForm::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Destructor has been called\n";
}

void		RobotomyRequestForm::formAction( void ) const
{
	// std::cout << "*DRILL NOISES*\n";
	// std::sleep
}

