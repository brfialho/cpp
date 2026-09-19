/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:35 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 22:23:53 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm();
	RobotomyRequestForm( const RobotomyRequestForm &other );
	RobotomyRequestForm( const std::string &target );
	RobotomyRequestForm& operator=( const RobotomyRequestForm &other );
	~RobotomyRequestForm();

	void	formAction( void ) const;
};

#endif
