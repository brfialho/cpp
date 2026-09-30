/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:05:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:09:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <string>
#include <iostream>

typedef unsigned long	uintptr_t;

class	Data;

class	Serializer {

private:
	Serializer();
	Serializer( const Serializer &other );
	Serializer& operator=( const Serializer &other );
	~Serializer();

public:
	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);

};

#endif
