/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickmart <mickmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:34:45 by mickmart          #+#    #+#             */
/*   Updated: 2026/02/04 05:36:04 by mickmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const int n) : _value(n << _bits)
{
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _bits)))
{
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << _bits);
}

int Fixed::toInt(void) const
{
    return this->_value >> _bits;
}

// Comparison operators
bool Fixed::operator>(const Fixed &rhs) const
{
    return this->_value > rhs._value;
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return this->_value < rhs._value;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return this->_value >= rhs._value;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return this->_value <= rhs._value;
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return this->_value == rhs._value;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return this->_value != rhs._value;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits(this->_value + rhs._value);
    return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits(this->_value - rhs._value);
    return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits((this->_value * rhs._value) >> _bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits((this->_value << _bits) / rhs._value);
    return result;
}

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
