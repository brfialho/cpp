/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 12:56:17 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class	Bureaucrat {

private:


public:
	Bureaucrat();
	Bureaucrat( const Bureaucrat &other );
	Bureaucrat& operator=( const Bureaucrat &other );
	~Bureaucrat();

};

#endif
