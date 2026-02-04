/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:29:00 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/04 03:41:06 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType()
                  << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}
