/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:32:06 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 18:52:49 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <iostream>

template <typename T>
void	print( const T &item ) {
	std::cout << item << '\n';
}

template <typename T>
void	increment( T &item ) {
	item += 10;
}

#endif