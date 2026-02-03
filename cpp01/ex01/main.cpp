/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:43:18 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 05:13:36 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}
