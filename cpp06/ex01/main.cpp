/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 00:36:46 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:13:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main ( void )
{
	Data	jaina("Jaina", "Mage", 80);
	Data	rexxar("Rexxar", "Hunter", 80);

	std::cout << jaina << rexxar;
}
