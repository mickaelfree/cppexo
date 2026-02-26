/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:33:32 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:14:03 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "WrongAnimal.hpp"

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
  Animal animal;
  Cat cat;

  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const WrongAnimal* l = new WrongCat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  std::cout << l->getType() << " " << std::endl;
  l->makeSound();
  delete l;
  delete j;
  delete i;
  return 0;
}
