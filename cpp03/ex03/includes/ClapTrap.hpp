/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:48:14 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 19:15:35 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class	ClapTrap {

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_atk;


protected:
	ClapTrap( const std::string &name, 
			unsigned int hp, 
			unsigned int energy, 
			unsigned int atk );
	virtual std::string		getClassName( void );
	std::string				getName( void );
	unsigned int			getHp( void );
	unsigned int			getEnergy( void );
	unsigned int			getAtk( void );


public:
	ClapTrap();
	ClapTrap( const std::string &name );
	ClapTrap( const ClapTrap &other );
	ClapTrap& operator=( const ClapTrap &other );
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
