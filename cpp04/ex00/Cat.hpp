/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:36:35 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 05:06:06 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
  public:
    Cat();
    Cat(const Cat &other);
    ~Cat();
    Cat& operator=(const Cat &other);
    virtual void makeSound()const;

};



#endif
