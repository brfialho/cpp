/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:14:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 12:41:21 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main ( void )
{
	int	arr1[] = {1, 2, 3, 4, 5};
	int	arr2[] = {10, 20, 30};
	int	arr3[] = {4};
	
	std::vector<int>	v(arr1, arr1 + 5);
	std::list<int>		l(arr2, arr2 + 3);
	std::vector<int>	v2(arr3, arr3 + 1);
	

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
	for (std::vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';

	std::cout << std::boolalpha;
	std::cout << easyfind(v, 4) << '\n'
			<< easyfind(l, 4) << '\n'
			<< easyfind(v2, 4) << '\n';
}
