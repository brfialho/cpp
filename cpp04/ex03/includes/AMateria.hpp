/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:56:53 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 19:00:46 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>

class	ICharacter;

class	AMateria {

private:
	std::string	_type;

public:
	AMateria();
	AMateria( std::string const &type );
	AMateria( const AMateria &other );
	AMateria& operator=( const AMateria &other );
	~AMateria();

	const std::string	&getType() const;

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
