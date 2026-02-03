/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:18:45 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:16:33 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string _name;

  public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
    void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
