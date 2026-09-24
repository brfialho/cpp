/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:32 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/24 18:12:36 by brfialho         ###   ########.fr       */
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
	static unsigned long	state = 0;

	if (!state)
	{
		int *seed = new int;
		state = (unsigned long)seed;
		delete seed;
	}
	state = state * 1103515245 + 12345;

	// std::cout << "*DRILL NOISES*\n"
	// 		<< getTarget() << ((state >> 16) % 2 ? " has been successfully robotomized" : " has not survived romotomization") << '\n';
	// std::cout << (bool)((state >> 16) % 2) << '\n';

	for (int i = 63; i >= 0; i--)
	{
		std::cout << (state & 1UL << i ? 1 : 0);
		if (i % 8 == 0)
			std::cout << ' ';
	}
	std::cout << '\n';
}
