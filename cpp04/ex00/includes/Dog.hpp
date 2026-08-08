/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:41:10 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/08 15:41:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

class	Dog {

private:


public:
	Dog();
	Dog( const Dog &other );
	Dog& operator=( const Dog &other );
	~Dog();

};

#endif
