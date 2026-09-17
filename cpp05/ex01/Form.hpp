/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:52:40 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/17 13:53:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>

class	Form {

private:
	const	std::string	_name;
	const	int			_signReqGrade;
	const	int			_execReqGrade;
	bool				_isSigned;

public:
	Form();
	Form( const std::string &name, int signReqGrade, int execReqGrade );
	Form( const Form &other );
	Form& operator=( const Form &other );
	~Form();

};

#endif
