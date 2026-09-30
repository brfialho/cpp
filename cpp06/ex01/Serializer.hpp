/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:05:03 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:33:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <string>
#include <iostream>
#include <stdint.h>

class	Data;

class	Serializer {

private:
	Serializer();
	Serializer( const Serializer &other );
	Serializer& operator=( const Serializer &other );
	~Serializer();

public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

};

#endif
