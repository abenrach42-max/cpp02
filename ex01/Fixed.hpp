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
        Fixed   std::ostream &operator<<(std::ostream &os, const Fixed *f)
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif