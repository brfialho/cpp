/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 20:35:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define	ANIMALS 8

int	main ( void )
{
	Brain	brain;

	brain.printIdeas();

	brain.setIdeas("NOVA IDEA");
	brain.printIdeas();
	
	brain.setIdeas("BRAIN FOG", 5);
	Brain	b(brain);
	b.printIdeas();
	b.setIdeas("NULL");
	brain.printIdeas();
	b.printIdeas();

	std::cout << '\n';

	Cat	cat;
	cat.getBrain()->printIdeas();
	cat.getBrain()->setIdeas("RATS");
	Cat	c(cat);
	c.getBrain()->setIdeas("NAPS");
	cat.getBrain()->setIdeas("STRANGE CAT IDEA", 3);
	cat.getBrain()->printIdeas();
	c.getBrain()->printIdeas();

	std::cout << '\n';

	Animal	*animals[ANIMALS];

	for (int i = 0; i < ANIMALS; i++)
		i < ANIMALS / 2 ? animals[i] = new Cat : animals[i] = new Dog;

	for (int i = 0; i < ANIMALS; i++)
	{
		std::cout << animals[i]->getType() << '\n';
		animals[i]->makeSound();
		animals[i]->getBrain()->setIdeas("BAD IDEA", i);
		animals[i]->getBrain()->printIdeas();
	}
	for (int i = 0; i < ANIMALS; i++)
		delete animals[i];

	// Animal	a; DOESNT COMPILE BECAUSE ANIMAL IS ABSTRACT NOW
}
