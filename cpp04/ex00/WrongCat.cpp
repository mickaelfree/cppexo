/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:45:17 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:36:05 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
  std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
  std::cout << "WrongCat assignation operator called" << std::endl;
  if (this != &other)
    WrongAnimal::operator=(other);
  return *this;
}

void WrongCat::makeSound() const
{
  std::cout << "Wrong meow!" << std::endl;
}
