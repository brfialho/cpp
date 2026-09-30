/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 01:05:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 01:05:00 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::Serializer( const Serializer &other ){(void)other;}
Serializer&	Serializer::operator=(const Serializer& other){(void)other;return *this;}
Serializer::~Serializer(){}

