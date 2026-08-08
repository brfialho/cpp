/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:17:57 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:31:55 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>
#include <iostream>

class	WrongAnimal {

private:


protected:
	std::string	_type;


public:
	WrongAnimal();
	WrongAnimal( const std::string &type );
	WrongAnimal( const WrongAnimal &other );
	WrongAnimal& operator=( const WrongAnimal &other );
	virtual ~WrongAnimal();

	std::string	getType( void ) const;

	void	makeSound( void ) const;

};

#endif
