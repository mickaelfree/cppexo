/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:44:35 by mickmart          #+#    #+#             */
/*   Updated: 2025/10/17 04:19:28 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
  private:
    Contact _contacts[8];
    int _index;
    void updateIndex();

  public:
    PhoneBook();
    void addContact();
    void searchContact();
};

#endif
