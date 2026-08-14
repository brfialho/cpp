/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:57:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 19:26:12 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main ( void )
{

	AMateria	*a = new Ice();
	AMateria	*b = new Cure();

	std::cout << a->getType() << ' ' << b->getType() << '\n';
	*a = *b;
	std::cout << a->getType() << ' ' << b->getType() << '\n';


	Character	c("BOB");
	Character	d("OTHER");

	c.equip(a);
	c.use(0, d);

	delete a;
	delete b;
}
