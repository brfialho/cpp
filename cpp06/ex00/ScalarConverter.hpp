/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:16:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 00:15:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <limits>
#include <iomanip>

class	ScalarConverter {

private:
	ScalarConverter();
	ScalarConverter( const ScalarConverter &other );
	ScalarConverter& operator=( const ScalarConverter &other );
	~ScalarConverter();


public:
	static void	convert( const std::string &literal );

	class	IScalarConverterException : public std::exception {
		public:
			const char	*what(void) const throw() = 0;
	};

	class	charNotVisibleException : public IScalarConverterException {
		public:
			const char	*what(void) const throw();
	};

	class	charNotPossibleExcepition : public IScalarConverterException {
		public:
			const char	*what(void) const throw();
	};

	class	intOverflowExcepition : public IScalarConverterException {
		public:
			const char	*what(void) const throw();
	};

	class	intUnderflowExcepition : public IScalarConverterException {
		public:
			const char	*what(void) const throw();
	};
	class	intNaNExcepition : public IScalarConverterException {
		public:
			const char	*what(void) const throw();
	};

};

#endif
