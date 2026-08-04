/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:56:42 by brfialho          #+#    #+#             */
/*   Updated: 2026/08/04 16:56:42 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

class	Point {

private:


public:
	Point();
	Point( const Point &other );
	Point& operator=( const Point &other );
	~Point();

};

#endif
