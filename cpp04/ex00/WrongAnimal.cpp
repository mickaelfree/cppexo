/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 04:52:38 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 05:22:39 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
  std::cout << "WrongAnimal parametric constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type)
{
  std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
  std::cout << "WrongAnimal assignation operator called" << std::endl;
  if (this != &other)
    _type = other._type;
  return *this;
}

std::string WrongAnimal::getType() const
{
  return _type;
}

void WrongAnimal::makeSound() const
{
  std::cout << "Wrong animal sound!" << std::endl;
}
