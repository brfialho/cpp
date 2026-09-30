/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 00:36:46 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:49:33 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main ( void )
{
	uintptr_t	ptr;
	Data		*j = new Data("Jaina", "Mage", 80);
	Data		*r = new Data("Rexxar", "Hunter", 80);

	std::cout << *j << *r;

	ptr = Serializer::serialize(j);
	std::cout << *Serializer::deserialize(ptr);
	ptr = Serializer::serialize(r);
	std::cout << *Serializer::deserialize(ptr);

	delete j;
	delete Serializer::deserialize(ptr);
}
