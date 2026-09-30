/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:22:41 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:12:46 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data():
_name("Unknown"), _heroClass("Unknown"), _level(0){}

Data::Data( const std::string &name, const std::string &heroClass, unsigned short level ):
_name(name),_heroClass(heroClass), _level(level){}

Data::Data( const Data &other ):
_name(other._name), _heroClass(other._heroClass), _level(other._level){}

Data&	Data::operator=(const Data& other)
{
	if (this == &other)
		return *this;

	_heroClass = other._heroClass;
	_level = other._level;
	return *this;
}

Data::~Data(){}

const std::string	&Data::getName( void ) const
{
	return _name;
}

const std::string	&Data::getHeroClass( void ) const
{
	return _heroClass;
}

unsigned short	Data::getLevel( void ) const
{
	return _level;
}

std::ostream&	operator<<(std::ostream &out, const Data &d)
{
	out << "Name: " << d.getName() << '\n'
		<< "Class: " << d.getHeroClass() << '\n'
		<< "Level: " << d.getLevel() << '\n';
	return out;
}
