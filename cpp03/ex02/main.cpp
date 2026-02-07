/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 05:30:04 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/07 05:38:53 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap frag("Destroyer");

    frag.attack("Target");
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.highFivesGuys();

    return 0;
}
