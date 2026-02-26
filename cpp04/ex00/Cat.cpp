/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 00:41:19 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:32:51 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
  std::cout << "Cat assignation operator called" << std::endl;
  if (this != &other)
    Animal::operator=(other);
  return *this;
}

void Cat::makeSound() const
{
  std::cout << "Meow!" << std::endl;
}
