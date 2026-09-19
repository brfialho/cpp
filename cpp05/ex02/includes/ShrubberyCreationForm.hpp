/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 22:23:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( const std::string &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &other );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &other );
	~ShrubberyCreationForm();

	void	formAction( void ) const;
};

#endif
