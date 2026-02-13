/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:44:39 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/11 02:37:37 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : _index(0) {};
std::string truncate(const std::string& str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}
void PhoneBook::addContact()
{
    Contact new_contact;

    std::string firstName;
    std::cout << "Enter first name: ";
    if (!std::getline(std::cin, firstName))
        return;
    while (firstName.empty())
    {
        std::cout << "First name cannot be empty. Please try again: ";
        if (!std::getline(std::cin, firstName))
            return;
    }
    std::string lastName;
    std::cout << "Enter last name: ";
    if (!std::getline(std::cin, lastName))
        return;
    while (lastName.empty())
    {
        std::cout << "Last name cannot be empty. Please try again: ";
        if (!std::getline(std::cin, lastName))
            return;
    }
    std::string nickName;
    std::cout << "Enter Nickname: ";
    if (!std::getline(std::cin, nickName))
        return;
    while (nickName.empty())
    {
        std::cout << "Nickname cannot be empty. Please try again: ";
        if (!std::getline(std::cin, nickName))
            return;
    }
    std::string phoneNumber;
    std::cout << "Enter phone number: ";
    if (!std::getline(std::cin, phoneNumber))
        return;
    while (phoneNumber.empty())
    {
        std::cout << "Phone number cannot be empty. Please try again: ";
        if (!std::getline(std::cin, phoneNumber))
            return;
    }
    std::string darkestSecret;
    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, darkestSecret))
        return;
    while (darkestSecret.empty())
    {
        std::cout << "Darkest secret cannot be empty. Please try again: ";
        if (!std::getline(std::cin, darkestSecret))
            return;
    }
    new_contact.setFirstName(firstName);
    new_contact.setLastName(lastName);
    new_contact.setNickName(nickName);
    new_contact.setPhoneNumber(phoneNumber);
    new_contact.setDarkestSecret(darkestSecret);
    _contacts[_index % 8] = new_contact;
    _index++;
}
void PhoneBook::searchContact()
{
    std::string input;
    int max_contacts;

    if (_index == 0)
    {
        std::cout << "No contacts found" << std::endl;
        return;
    }
    if (_index < 8)
        max_contacts = _index;
    else
        max_contacts = 8;
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < _index && i < 8; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(_contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(_contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(_contacts[i].getNickName()) << std::endl;
    }
    std::cout << "Enter index: ";
    if (!std::getline(std::cin, input))
        return;
    if (input.empty())
    {
        std::cout << "Index cannot be empty" << std::endl;
        return;
    }
  char* endptr;
  long num  = std::strtol(input.c_str(), &endptr, 10);
    if (num < 0 || num >= max_contacts || *endptr != '\0')
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
  int index  = (int)(num);
    std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
    std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
}
