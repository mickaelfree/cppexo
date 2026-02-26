/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:33:32 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 05:14:09 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
  std::cout << "=== Basic test ===" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;

  std::cout << "\n=== Array test ===" << std::endl;
  Animal* animals[4];
  animals[0] = new Dog();
  animals[1] = new Dog();
  animals[2] = new Cat();
  animals[3] = new Cat();
  
  for (int i = 0; i < 4; i++)
    delete animals[i];

  std::cout << "\n=== Deep copy test ===" << std::endl;
  Dog basic;
  Dog copy = basic;

  return 0;
}
