/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:29:23 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:31:36 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
  private:
    std::string _type;

  public:
    Weapon(std::string type);
    const std::string &getType(void) const;
    void setType(std::string type);
};

#endif
