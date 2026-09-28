/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 21:35:02 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"
#include <fstream>

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
