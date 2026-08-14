/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:56:36 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/14 18:56:37 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"
class	MateriaSource : public IMateriaSource	{

private:


public:
	MateriaSource();
	MateriaSource( const MateriaSource &other );
	MateriaSource& operator=( const MateriaSource &other );
	~MateriaSource();

};

#endif
