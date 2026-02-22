/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:52:22 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:16:58 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
  if (N <= 0)
  {
    std::cerr <<  "Error: N must be greater than 0" << std::endl;
    return NULL;
  }
  Zombie *horde = new Zombie[N];

  for (int i = 0; i < N; i++)
    horde[i].setName(name);
  return horde;
}
