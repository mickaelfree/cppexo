/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:44:54 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/11 02:37:23 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "\nCommands: ADD, SEARCH, EXIT> " << std::endl;
        if (!std::getline(std::cin, command))
        {
            std::cout << "Error: getline failed\n";
            break;
        }
        if (command == "ADD")
        {
            phonebook.addContact();
        }
        else if (command == "SEARCH")
        {
            phonebook.searchContact();
        }
        else if (command == "EXIT")
        {
            return 0;
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}
