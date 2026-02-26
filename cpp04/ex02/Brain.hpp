/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 03:22:27 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/26 03:45:39 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
  private:
    std::string _ideas[100];
  public:
    Brain();
    Brain(const Brain &other);
    ~Brain();
    Brain& operator=(const Brain &other);
};

#endif
