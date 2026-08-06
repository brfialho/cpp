/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:10:20 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/06 17:08:08 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

#define CLEAR "\033[2J\033[H"
#define PROMPT_COLOR "\033[1;37m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_RED "\033[1;31m"
#define RESET "\033[0m"

class	FragTrap : public ClapTrap	{

private:


protected:
	std::string	getClassName( void );


public:
	FragTrap();
	FragTrap( const std::string& name );
	FragTrap( const FragTrap &other );
	FragTrap& operator=( const FragTrap &other );
	~FragTrap();

	void	highFivesGuys(void);

};

#endif
