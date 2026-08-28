/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 01:30:11 by marvin            #+#    #+#             */
/*   Updated: 2026/08/19 01:30:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : value(nb << 8)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : value(roundf(nb * (1 << 8)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy_obj;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->value = src.value;
    }
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int   Fixed::toInt(void) const
{
    return ((int)this->value >> 8);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << 8));
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed   Fixed::operator*(const Fixed &f) const
{
    return (this->toFloat() * f.toFloat());
}

Fixed   Fixed::operator+(const Fixed &f) const
{
    return (this->toFloat() + f.toFloat());
}

Fixed   Fixed::operator-(const Fixed &f) const
{
    return (this->toFloat() - f.toFloat());
}

Fixed   Fixed::operator/(const Fixed &f) const
{
    return (this->toFloat() / f.toFloat());
}

bool    Fixed::operator>(const Fixed &f) const
{
    return (this->value > f.value);
}

bool    Fixed::operator<(const Fixed &f) const
{
    return (this->value < f.value);
}

bool    Fixed::operator>=(const Fixed &f) const
{
    return (this->value >= f.value);
}

bool    Fixed::operator<=(const Fixed &f) const
{
    return (this->value <= f.value);
}

bool    Fixed::operator==(const Fixed &f) const
{
    return (this->value == f.value);
}

bool    Fixed::operator!=(const Fixed &f) const
{
    return (this->value != f.value);
}

Fixed   Fixed::operator++(int)
{
    
    Fixed   tmp(*this);
    this->value += 1;
    return (tmp);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);
    this->value -= 1;
    return (tmp);
}

Fixed   Fixed::operator++(void)
{
    this->value += 1;
    return (*this);
}

Fixed   Fixed::operator--(void)
{
    this->value -= 1;
    return (*this);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.value >= b.value)
        return (a);
    else
        return (b);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.value <= b.value)
        return (a);
    else
        return (b);
}

const Fixed   &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.value >= b.value)
        return (a);
    else
        return (b);
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.value <= b.value)
        return (a);
    else
        return (b);
}
