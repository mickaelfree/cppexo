/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 03:59:20 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/04 04:06:24 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
    return 0;
}
