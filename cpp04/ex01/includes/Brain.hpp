/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:38:22 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 18:16:49 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

#define IDEAS 10

class	Brain {

private:
	std::string	_ideas[IDEAS];


public:
	Brain();
	Brain( const std::string &idea );
	Brain( const Brain &other );
	Brain& operator=( const Brain &other );
	~Brain();

	void	setIdeas( const std::string &idea );
	bool	setIdeas( const std::string &idea, unsigned int i );
	void	printIdeas( void ) const;


};

#endif
