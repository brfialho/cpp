/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:53:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 19:00:13 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <Weapon.hpp>

class	HumanA	{


public:
	HumanA( const std::string &name, Weapon &weapon );
	void	attack( void );

private:
	std::string	_name;
	Weapon		&_weapon;

};

#endif