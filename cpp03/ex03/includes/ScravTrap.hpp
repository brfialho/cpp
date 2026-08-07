/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:45:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 21:09:23 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_H
# define SCRAVTRAP_H

#include "ClapTrap.hpp"

class	ScravTrap : virtual public ClapTrap {

private:
	bool	_guardMode;


protected:
	std::string	getClassName( void );

	void		assignScravMembers( const ScravTrap &other );


public:
	ScravTrap();
	ScravTrap( const std::string &name );
	ScravTrap( const ScravTrap &other );
	ScravTrap& operator=( const ScravTrap &other );
	~ScravTrap();

	void	guardGate( void );
	void	attack(const std::string& target);
};

#endif
