/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:31:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 17:46:23 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main( void )
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout
		<< "String Mem Adress      :: " << &s << '\n'
		<< "stringPTR Value        :: " << stringPTR << '\n'
		<< "stringREF Mem Adress   :: " << &stringREF << '\n'
		<< '\n'
		<< "String Value           :: " << s << '\n'
		<< "stringPTR Dereferenced :: " << *stringPTR << '\n'
		<< "stringREF value        :: " << stringREF << '\n';
}
