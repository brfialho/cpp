/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:57:01 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 20:04:27 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main ( void )
{
	AMateria	*m[6] = {NULL};

	for (int i = 0; i < 6; i++)
		i % 2 ? m[i] = new Ice : m[i] = new Cure;

	Character	c("BOB");
	Character	d("OTHER");

	c.unequip (1);
	for (int i = 0; i < 6; i++)
		c.equip(m[i]);
	
	c.use(0, d);
	c.use(1, d);
	c.use(2, d);
	c.use(3, d);

	AMateria	*ice = new Ice;
	c.unequip (2);
	c.equip(ice);
	c.use (2, d);
	c.use(-1, d);

	Character	e(c);

	e.use(0, d);
	e.use(1, d);
	e.use(2, d);
	e.use(3, d);

	Character f;

	f = c;

	e.use(0, d);
	e.use(1, d);
	e.use(2, d);
	e.use(3, d);

}
