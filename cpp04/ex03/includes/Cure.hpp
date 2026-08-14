/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:28:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 18:08:49 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class	Cure : public AMateria	{

private:


public:
	Cure();
	Cure( const Cure &other );
	Cure& operator=( const Cure &other );
	~Cure();

	// void		use(ICharacter& target);
	AMateria	*clone() const;
};

#endif
