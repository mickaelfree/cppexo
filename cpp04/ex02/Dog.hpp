/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:35:35 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 05:09:34 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain* _brain;

  public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog& operator=(const Dog &other);
    virtual void makeSound()const;

};



#endif
