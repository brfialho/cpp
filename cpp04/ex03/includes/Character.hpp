/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:20 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 19:33:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INVENTORY_SLOTS 4

class	Character : public ICharacter	{

private:
	std::string	_name;
	AMateria 	*_inventory[INVENTORY_SLOTS];

public:
	Character();
	Character( const std::string &name );
	Character( const Character &other );
	Character& operator=( const Character &other );
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif
