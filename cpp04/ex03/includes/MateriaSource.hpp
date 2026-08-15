/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:36 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 21:00:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"

#define MATERIA_SLOTS 4

class	MateriaSource : public IMateriaSource	{

private:
	AMateria	*_slots[MATERIA_SLOTS];

public:
	MateriaSource();
	MateriaSource( const MateriaSource &other );
	MateriaSource& operator=( const MateriaSource &other );
	~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria	*createMateria(std::string const & type);

};

#endif
