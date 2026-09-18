/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:35 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:57:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>

class	RobotomyRequestForm {

private:


public:
	RobotomyRequestForm();
	RobotomyRequestForm( const RobotomyRequestForm &other );
	RobotomyRequestForm& operator=( const RobotomyRequestForm &other );
	~RobotomyRequestForm();

};

#endif
