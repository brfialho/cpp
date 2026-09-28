/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:57:30 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/27 23:35:01 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

public:
	static AForm	*createForm( const std::string &target );

	PresidentialPardonForm();
	PresidentialPardonForm( const std::string &target );
	PresidentialPardonForm( const PresidentialPardonForm &other );
	PresidentialPardonForm& operator=( const PresidentialPardonForm &other );
	~PresidentialPardonForm();

	void	formAction( void ) const;
};

#endif
