/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:41:16 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 21:49:47 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <stack>

class	RPN {

private:
	static std::stack<int>	_stack;

public:
	RPN();
	RPN( const RPN &other );
	~RPN();
	RPN& operator=( const RPN &other );

	

};

#endif
