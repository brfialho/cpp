/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:22:44 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 02:11:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <string>
#include <iostream>

class	Data {

private:
	const std::string	_name;
	std::string			_heroClass;
	unsigned short		_level;

public:
	Data();
	Data( const std::string &name, const std::string &heroClass, unsigned short level );
	Data( const Data &other );
	Data& operator=( const Data &other );
	~Data();

	const std::string	&getName( void ) const;
	const std::string	&getHeroClass( void ) const;
	unsigned short		getLevel( void ) const;

};

std::ostream&	operator<<(std::ostream &out, const Data &d);

#endif
