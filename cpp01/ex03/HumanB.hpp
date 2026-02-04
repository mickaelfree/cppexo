/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:29:10 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:29:12 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
    std::string _name;
    Weapon *_weapon;

  public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void);
};

#endif
