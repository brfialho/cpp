/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:14:25 by brfialho          #+#    #+#             */
/*   Updated: 2026/10/20 12:43:03 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <algorithm>

template <typename T>
bool	easyfind (const T &container, int n)
{
	return std::find(container.begin(), container.end(), n) == container.end() ? false : true;
}

#endif