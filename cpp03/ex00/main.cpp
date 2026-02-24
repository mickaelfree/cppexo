/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 21:19:32 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/24 21:19:35 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Bob");
    ClapTrap clap2("Alice");

    clap1.attack("Alice");
    clap2.takeDamage(0);
    clap2.beRepaired(5);
    
    clap1.takeDamage(8);
    clap1.beRepaired(3);
    clap1.attack("Alice");
    
    clap1.takeDamage(10);
    clap1.attack("Alice");
    clap1.beRepaired(5);

    return 0;
}

