/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:18:45 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 04:21:07 by mickmart         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
