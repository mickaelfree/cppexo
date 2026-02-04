/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:34:57 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/04 05:35:50 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
  private:
    int _value;
    static const int _bits = 8;

  public:
    Fixed(void);
    Fixed(const Fixed &src);
    ~Fixed(void);
    Fixed &operator=(const Fixed &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
