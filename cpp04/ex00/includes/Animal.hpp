/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:40:35 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:12:06 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class	Animal {

private:


protected:
	std::string	_type;


public:
	Animal();
	Animal( const std::string &type );
	Animal( const Animal &other );
	Animal& operator=( const Animal &other );
	~Animal();

	std::string	getType( void ) const;

	virtual void	makeSound( void ) const;

};

#endif
