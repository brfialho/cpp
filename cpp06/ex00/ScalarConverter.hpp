/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:16:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/29 21:14:01 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include <iomanip>

class	ScalarConverter {

public:
	static void	convert( const std::string &literal );

	ScalarConverter();
	ScalarConverter( const ScalarConverter &other );
	ScalarConverter& operator=( const ScalarConverter &other );
	~ScalarConverter();

	class	charNotVisibleException : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	charNotPossibleExcepition : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	intOverflowExcepition : public std::exception {
		public:
			const char	*what(void) const throw();
	};

	class	intUnderflowExcepition : public std::exception {
		public:
			const char	*what(void) const throw();
	};
	class	intNaNExcepition : public std::exception {
		public:
			const char	*what(void) const throw();
	};


};

#endif
