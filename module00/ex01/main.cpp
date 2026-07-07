/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:45:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 00:38:10 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    // std::string input;
    // std::cin >> input;
    // std::cout << input << '\n';
    // std::cout << input;
    std::string input;
    // // char input;
    // double f = 1.2324352123;
    // std::cout << f << '\n';
    // bool teste = 0;
    // std::cout << std::boolalpha;
    // std::cout << std::noboolalpha;

    
    // std::cout << teste << '\n';
    while (1)
    {
        std::cout << "Type something NOW\n";
        std::cin >> input;
        std::cout << "You typed >> " << input << '\n';
        std::cin.ignore(10000, '\n');
    }
    return (0);
}
