/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 01:30:14 by marvin            #+#    #+#             */
/*   Updated: 2026/08/19 01:30:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int    nb_fractio_bits;
    public:
        Fixed(void);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed &cpy_obj);
        Fixed &operator=(const Fixed &src);
        ~Fixed(void);
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        static Fixed    &max(Fixed &a, Fixed &b);
        static Fixed    &min(Fixed &a, Fixed &b);
        static const Fixed    &max(const Fixed &a, const Fixed &b);
        static const Fixed    &min(const Fixed &a, const Fixed &b);
        Fixed   operator*(const Fixed &f) const;
        Fixed   operator+(const Fixed &f) const;
        Fixed   operator-(const Fixed &f) const;
        Fixed   operator/(const Fixed &f) const;
        bool    operator>(const Fixed &f) const;
        bool    operator>=(const Fixed &f) const;
        bool    operator<(const Fixed &f) const;
        bool    operator<=(const Fixed &f) const;
        bool    operator==(const Fixed &f) const;
        bool    operator!=(const Fixed &f) const;
        Fixed   operator++(int);
        Fixed   operator--(int);
        Fixed   operator++(void);
        Fixed   operator--(void);
};

#endif