/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:22:44 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 01:22:44 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <string>
#include <iostream>

class	Data {

private:


public:
	Data();
	Data( const Data &other );
	Data& operator=( const Data &other );
	~Data();

};

#endif
