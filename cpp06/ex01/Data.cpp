/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:22:41 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 01:22:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{}

Data::Data( const Data &other )
{}

Data&	Data::operator=(const Data& other)
{
	if (this == &other)
		return *this;

	return *this;
}

Data::~Data()
{}

