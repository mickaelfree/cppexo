/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:18:56 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/03 04:27:25 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    Zombie *heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    return 0;
}
