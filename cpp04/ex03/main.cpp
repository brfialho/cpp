/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:57:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 18:16:27 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int	main ( void )
{

	AMateria	*a = new Ice();
	AMateria	*b = new Cure();

	std::cout << a->getType() << ' ' << b->getType() << '\n';
	*a = *b;
	std::cout << a->getType() << ' ' << b->getType() << '\n';


	delete a;
	delete b;
}
