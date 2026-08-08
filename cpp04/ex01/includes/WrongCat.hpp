/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:17:49 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 16:17:54 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal	{

private:


public:
	WrongCat();
	WrongCat( const WrongCat &other );
	WrongCat& operator=( const WrongCat &other );
	~WrongCat();

	void	makeSound( void ) const;

};

#endif
