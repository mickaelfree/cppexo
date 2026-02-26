/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:35:28 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 05:08:03 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &other)
    Animal::operator=(other);
  return *this;
}

void Dog::makeSound() const
{
  std::cout << "Woof!" << std::endl;
}
