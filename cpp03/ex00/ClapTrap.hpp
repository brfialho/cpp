/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 18:13:24 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class	ClapTrap {

private:
	std::string	_name;
	int			_hp;
	int			_mana;
	int			_atk;

public:
	ClapTrap();
	ClapTrap( const std::string name );
	ClapTrap( const ClapTrap &other );
	ClapTrap& operator=( const ClapTrap &other );
	~ClapTrap();

	// void	attack(const std::string& target);
	// void	takeDamage(unsigned int amount);
	// void	beRepaired(unsigned int amount);
};

#endif
