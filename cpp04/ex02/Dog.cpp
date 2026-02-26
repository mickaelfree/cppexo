/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:35:28 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:48:50 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
  std::cout << "Dog default constructor called" << std::endl;
  _brain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
  _brain = new Brain(*other._brain);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
  delete _brain;
}

Dog& Dog::operator=(const Dog &other)
{
  std::cout << "Dog assignation operator called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete _brain;
    _brain = new Brain(*other._brain);
  }
  return *this;
}

void Dog::makeSound() const
{
  std::cout << "Woof!" << std::endl;
}
