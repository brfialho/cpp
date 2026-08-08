/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 20:25:16 by brfialho         ###   ########.fr       */
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
		animals[i]->makeSound();
		if (animals[i]->getType() == "Cat")
		{
			((Cat *)animals[i])->getBrain()->setIdeas("BAD IDEA", i);
			((Cat *)animals[i])->getBrain()->printIdeas();
		}
		else if (animals[i]->getType() == "Dog")
		{
			((Dog *)animals[i])->getBrain()->setIdeas("BAD IDEA", i);
			((Dog *)animals[i])->getBrain()->printIdeas();	
		}
		else
		{
			std::cout << "SOMETHING IS WRONG" << std::endl;	
			return 1;
		}
	}
	for (int i = 0; i < ANIMALS; i++)
		delete animals[i];
}
