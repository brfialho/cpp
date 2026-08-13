/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:56:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/12 23:00:29 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class	Point {

private:
	const Fixed	_x;
	const Fixed	_y;

public:
	Point();
	Point( const float x, const float y );
	Point( const Point &other );
	Point& operator=( const Point &other );
	~Point();

	static Fixed	distance( const Point &a, const Point &b );

};

#endif
