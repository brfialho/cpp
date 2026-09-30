/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:24:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/09/30 19:08:19 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template <typename T>
void	iter( T *array, const int lenght, void (*f)(const T&) ) {
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

template <typename T>
void	iter( T *array, const int lenght, void (*f)(T&) ) {
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

#endif