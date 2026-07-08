/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 23:45:38 by brfialho          #+#    #+#             */
/*   Updated: 2026/07/07 23:14:51 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook book;
    Contact test;

    book.printList();

    int i = -1;
    while (i++ < 12)
    {
        std::cout << "LOOP COUNT >>>> " << i << '\n';
        if (i < 8)
            test = Contact("BABI", "DRUMMOND", "TOTORA", "911", "EH MUITO FOFINHA");
        else
            test = Contact("NAO EH MAIS A BABI", "DRUMMOND", "TOTORA", "911", "EH MUITO FOFINHA");
        book.add(test);
        book.printList();
    }
    return (0);
}
