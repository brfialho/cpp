/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:29:18 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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

	Dog	dog;
	dog.getBrain()->printIdeas();
	dog.getBrain()->setIdeas("BONE");
	Dog	d(dog);
	d.getBrain()->setIdeas("SLEEP");
	dog.getBrain()->setIdeas("SIT", 3);
	dog.getBrain()->printIdeas();
	d.getBrain()->printIdeas();
}
