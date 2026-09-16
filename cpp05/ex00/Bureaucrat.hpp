/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/16 13:27:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>

class	Bureaucrat {

private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &other );
	Bureaucrat& operator=( const Bureaucrat &other );
	~Bureaucrat();

	const std::string	&getName( void ) const;
	int				getGrade( void ) const;

	void	upGrade( void );
	void	downGrade( void );

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b);

#endif
