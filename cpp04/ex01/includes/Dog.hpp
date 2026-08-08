/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 19:46:09 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal {

private:
	Brain	*_brain;

public:
	Dog();
	Dog( const Dog &other );
	Dog& operator=( const Dog &other );
	~Dog();

	Brain	*&getBrain( void );

	void	makeSound( void ) const;
};

#endif
