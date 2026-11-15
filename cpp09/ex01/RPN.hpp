/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:41:16 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 23:25:52 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>

class	RPN {

private:
	static std::stack<int>	_stack;

	RPN();
	RPN( const RPN &other );
	~RPN();
	RPN& operator=( const RPN &other );

public:
	static void	evaluateExpression( const std::string &expr );
	static void operation( void (*f)(int, int) );
	static void add( int first, int second );
	static void sub( int first, int second );
	static void multi( int first, int second );
	static void div( int first, int second );

	class	IRPNException : public std::exception	{
		public:
			const char	*what( void ) const throw() = 0;
	};

	class	RPNExceptionInvalidToken : public IRPNException	{
		public:
			const char	*what( void ) const throw();
	};

	class	RPNExceptioninStackUnderflow : public IRPNException	{
		public:
			const char	*what( void ) const throw();
	};

	class	RPNExceptioninExtraTokens : public IRPNException	{
		public:
			const char	*what( void ) const throw();
	};

	class	RPNExceptioninDivisonByZero : public IRPNException	{
		public:
			const char	*what( void ) const throw();
	};
};

#endif
