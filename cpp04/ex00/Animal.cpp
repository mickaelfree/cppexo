/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:35:51 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:37:02 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal")
{
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
  std::cout << "Animal parametric constructor called" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type)
{
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &other)
    _type = other._type;
  return *this;
}

std::string Animal::getType() const
{
  return _type;
}

void Animal::makeSound() const
{
  std::cout << "Generic animal sound!" << std::endl;
}
