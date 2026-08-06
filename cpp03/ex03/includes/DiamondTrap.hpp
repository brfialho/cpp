/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:28:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 19:19:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScravTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScravTrap, public FragTrap	{

private:
	std::string	_name;


protected:
	std::string	getClassName( void );


public:
	DiamondTrap();
	DiamondTrap( const std::string &name );
	DiamondTrap( const DiamondTrap &other );
	DiamondTrap& operator=( const DiamondTrap &other );
	~DiamondTrap();

	void	whoAmI( void );
	void	displayStats( void );

};

#endif
