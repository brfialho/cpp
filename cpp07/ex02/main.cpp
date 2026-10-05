/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:51:37 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/05 18:56:21 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

ifndef TTT
# define TTT
template<typename T>
T	*test( int n )
{
	return (new T[n]);
}
#endif

int	main( void )
{
	T	*a = test(5);
}