/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:43:18 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:24:41 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de la string:     " << &str << std::endl;
    std::cout << "Adresse dans stringPTR:   " << stringPTR << std::endl;
    std::cout << "Adresse dans stringREF:   " << &stringREF << std::endl;

    std::cout << "Valeur de la string:      " << str << std::endl;
    std::cout << "Valeur via stringPTR:     " << *stringPTR << std::endl;
    std::cout << "Valeur via stringREF:     " << stringREF << std::endl;

    return 0;
}
