/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:30 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/18 18:57:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>

class	PresidentialPardonForm {

private:


public:
	PresidentialPardonForm();
	PresidentialPardonForm( const PresidentialPardonForm &other );
	PresidentialPardonForm& operator=( const PresidentialPardonForm &other );
	~PresidentialPardonForm();

};

#endif
