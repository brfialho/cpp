/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:31:41 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat	: public Animal	{

private:
	Brain	*_brain;

public:
	Cat();
	Cat( const Cat &other );
	Cat& operator=( const Cat &other );
	~Cat();

	Brain	*&getBrain( void );

	void	makeSound( void ) const;

};

#endif
