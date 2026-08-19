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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}