/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 18:28:17 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/13 18:52:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class	Ice : public AMateria	{

private:


public:
	Ice();
	Ice( const Ice &other );
	Ice& operator=( const Ice &other );
	~Ice();

};

#endif
