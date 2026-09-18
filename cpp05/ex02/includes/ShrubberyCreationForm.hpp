/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:57:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>

class	ShrubberyCreationForm {

private:


public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( const ShrubberyCreationForm &other );
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &other );
	~ShrubberyCreationForm();

};

#endif
