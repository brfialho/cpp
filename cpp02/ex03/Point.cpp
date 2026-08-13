/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:56:39 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 23:04:17 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():
_x(0),
_y(0)
{}

Point::Point( const float x, const float y ):
_x(x),
_y(y)
{}

Point::Point( const Point &other ):
_x(other._x),
_y(other._y)
{}

Point&	Point::operator=( const Point& other )
{
	(void)other;
	return *this;
}

Point::~Point()
{}

Fixed	Point::distance( const Point &a, const Point &b )
{
	Fixed f = (( a._x - b._x) * (a._x - b._x)) + ((a._y - b._y) * (a._y - b._y));

	return (f.squareRoot());
}