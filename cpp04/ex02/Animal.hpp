/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:35:42 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 04:54:55 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
  protected:
    std::string _type;

  public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &other);
    virtual ~Animal();
    Animal& operator=(const Animal &other);
    std::string getType(void)const ;
    virtual void makeSound()const = 0;
};
#endif



