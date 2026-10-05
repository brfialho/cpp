/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:24:24 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/05 18:14:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"
#include <string>

void	nonTemplatePrint( const std::string &s )
{
	std:: cout << s << '\n';
}

#define LENGHT 5

int main ( void )
{
	const std::string	constStrArray[LENGHT] = {"HELLO", "WORLD", "OLÁ", "MUNDO", ":)"};
	const int			constIntArray[LENGHT] = {-1, -2, -3, -4, -5};
	std::string			StrArray[LENGHT] = {"OI", ",", "TD", "BEM", "?"};
	int					intArray[LENGHT] = {0, 1, 2, 3, 4};

	::iter(constStrArray, LENGHT, nonTemplatePrint);
	::iter(constStrArray, LENGHT, print<const std::string>);

	::iter(constIntArray, LENGHT, print<const int>);

	::iter(StrArray, LENGHT, nonTemplatePrint);
	::iter(StrArray, LENGHT, print<std::string>);

	::iter(intArray, LENGHT, print<int>);
	::iter(intArray, LENGHT, increment<int>);
	::iter(intArray, LENGHT, print<int>);

	// ::iter(constIntArray, LENGHT, increment<const int>);
}