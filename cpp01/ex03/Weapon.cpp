/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:29:17 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:35:14 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

const std::string &Weapon::getType(void) const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
