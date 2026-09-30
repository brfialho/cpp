/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:51:05 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 18:07:38 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T> void	swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T max(const T &x, const T &y) {
	return (x > y ? x : y);
}

template <typename T> T min(const T &x, const T &y) {
	return (x < y ? x : y);
}

#endif