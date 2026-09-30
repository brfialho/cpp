/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:24:24 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 19:11:45 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"
#include <string>

#define LENGHT 5

int main ( void )
{
	const std::string	sArray[LENGHT] = {"HELLO", "WORLD", "OLÁ", "MUNDO", ":)"};
	// const int	sArray[LENGHT] = {-1, -2, -3, -4, -5};
	int					iArray[LENGHT] = {0, 1, 2, 3, 4};

	::iter(sArray, LENGHT, print<const std::string>);
	// ::iter(sArray, LENGHT, print<const int>);
	::iter(iArray, LENGHT, print<int>);
	::iter(iArray, LENGHT, increment<int>);
	::iter(iArray, LENGHT, print<int>);
}