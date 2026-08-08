/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:01:58 by brfialho         ###   ########.fr       */
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
}
