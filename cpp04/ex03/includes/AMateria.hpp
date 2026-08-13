/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:56:53 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 18:32:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>

class	ICharacter;

class	AMateria {

private:
	std::string	type;

public:
	AMateria();
	AMateria( std::string const &type );
	AMateria( const AMateria &other );
	AMateria& operator=( const AMateria &other );
	~AMateria();

	std::string const &getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
