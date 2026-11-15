/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:41:19 by brfialho          #+#    #+#             */
/*   Updated: 2026/11/14 23:13:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> RPN::_stack;

RPN::RPN(){}
RPN::RPN( const RPN &other ){(void)other;}
RPN::~RPN(){}
RPN&	RPN::operator=(const RPN& other){(void)other;return *this;}

void	RPN::evaluateExpression( const std::string &expr )
{
	std::stringstream	ss(expr);
	char				token;

	while (ss >> token)
	{
		std::cout << token << '\n';
		if (token == ' ')
			continue;
		else if (token >= '0' && token <= '9')
			_stack.push(token - '0');
		else if (token == '+')
			operation(add);
		else if (token == '-')
			operation(sub);
		else if (token == '*')
			operation(multi);
		else if (token == '/')
			operation(div);
		else
			throw RPNExceptionInvalidToken();
	}
	std::cout << _stack.top() << '\n';
}

void	RPN::operation( void (*f)(int, int) )
{
	if (_stack.size() < 2)
		throw RPNExceptioninStackUnderflow();

	int	first;
	int	second;

	second = _stack.top();
	_stack.pop();
	first = _stack.top();
	_stack.pop();

	f(first, second);
}

void RPN::add( int first, int second )
{
	_stack.push(first + second);
}

void RPN::sub( int first, int second )
{
	_stack.push(first - second);
}

void RPN::multi( int first, int second )
{
	_stack.push(first * second);
}

void RPN::div( int first, int second )
{
	_stack.push(first / second);
}

const char	*RPN::RPNExceptionInvalidToken::what( void ) const throw()
{
	return "invalid token";
}

const char	*RPN::RPNExceptioninStackUnderflow::what( void ) const throw()
{
	return "stack underflow";
}
