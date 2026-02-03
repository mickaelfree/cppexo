/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:28:52 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:37:31 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
  private:
    std::string _name;
    Weapon &_weapon;

  public:
    HumanA(std::string name, Weapon &weapon);
    void attack(void);
};

#endif
