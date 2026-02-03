/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:41:53 by mickmart          #+#    #+#             */
/*   Updated: 2026/01/23 21:39:23 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int length;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string x = argv[i];
        length = x.length();
        for (int j = 0; j < length; j++)
            x[j] = toupper(x[j]);
        std::cout << x;
    }
    std::cout << std::endl;
    return (0);
}
