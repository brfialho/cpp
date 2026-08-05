/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:45:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/05 19:40:54 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_H
# define SCRAVTRAP_H

#include "ClapTrap.hpp"

class	ScravTrap : public ClapTrap {


private:
	bool	_guardMode;


public:
	void	guardGate( void );

};

#endif
