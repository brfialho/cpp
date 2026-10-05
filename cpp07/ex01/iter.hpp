/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:24:15 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/05 18:17:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template <typename T, typename F>
void	iter( T *array, const int lenght, void (*f)(F&) ) {
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

#endif