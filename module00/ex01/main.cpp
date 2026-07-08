/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:45:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 21:21:37 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string input;
    while (1)
    {
        std::cout << "Type something NOW\n";
        std::cin >> input;
        std::cout << "You typed >> " << input << '\n';
        std::cin.ignore(10000, '\n');
    }
    return (0);
}
