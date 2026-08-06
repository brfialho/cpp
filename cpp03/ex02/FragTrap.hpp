/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:10:20 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 16:10:53 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap	{

private:


public:
	FragTrap();
	FragTrap( const FragTrap &other );
	FragTrap& operator=( const FragTrap &other );
	~FragTrap();

};

#endif
