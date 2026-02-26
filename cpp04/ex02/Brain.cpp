/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 03:22:13 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:47:09 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include<iostream> 
Brain::Brain()
{
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
    _ideas[i] = other._ideas[i];
}

Brain::~Brain()
{
  std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
  std::cout << "Brain assignation operator called" << std::endl;
  if (this != &other)
  {
    for (int i = 0; i < 100; i++)
      _ideas[i] = other._ideas[i];
  }
  return *this;
}
