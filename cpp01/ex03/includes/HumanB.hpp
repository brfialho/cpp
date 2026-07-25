/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:54:21 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 19:07:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <Weapon.hpp>

class	HumanB	{


public:
	HumanB( const std::string &name );
	void	setWeapon( Weapon &weapon );
	void	attack( void );

private:
	std::string	_name;
	Weapon		*_weapon;

};

#endif