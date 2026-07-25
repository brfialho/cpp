/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:19:49 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/25 17:24:17 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
 #define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {


public:
	Zombie();
	Zombie( std::string name );

	~Zombie();

	void	setName( std::string name );

	void	announce( void );


private:
	std::string	name;
};

#endif
