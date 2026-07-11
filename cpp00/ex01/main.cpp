/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:45:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/11 03:31:19 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void    print_menu(void)
{
    std::cout << "##########################\n";
    std::cout << "  TOTALLY REAL PHONEBOOK  \n";
    std::cout << "##########################\n";
    // std::cout << '\n';
    std::cout << "[1] ADD\n";
    std::cout << "[2] SEARCH\n";
    std::cout << "[3] EXIT\n";
    // std::cout << "\n";
    std::cout << ">> ";
}

int main(void)
{
    PhoneBook   book;
    std::string input;

    while (1)
    {
        print_menu();
        std::getline(std::cin, input);
        if (input.length() > 1)
            goto invalid;
        switch (input[0])
        {
            case '1':
                std::cout << "OPTION: " << 1 << '\n';
                book.add();
                break;
            case '2':
                std::cout << "OPTION: " << 2 << '\n';
                break;
            case '3':
                std::cout << "OPTION: " << 3 << '\n';
                std::cout << "GOODBYE :)\n";
                return (0);
                break;
            default:
                invalid:
                std::cout << "WRONG! TRY AGAIN DUMBASS\n";
        }
        book.printList();
        std::cout << '\n';
    }
}
