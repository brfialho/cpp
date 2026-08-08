/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:40:35 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 15:40:36 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

class	Animal {

private:


public:
	Animal();
	Animal( const Animal &other );
	Animal& operator=( const Animal &other );
	~Animal();

};

#endif
