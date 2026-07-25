/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:52:56 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 18:31:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class	Weapon	{


public:
	Weapon( void );
	Weapon( const std::string &type );

	const	std::string	&getType( void );

	void	setType(const std::string &type);

private:
	std::string	_type;

};
#endif