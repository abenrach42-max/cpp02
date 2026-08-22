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

class Fixed
{
    private:
        int value;
        static const int    nb_fractio_bits;
    public:
        Fixed(void);
        Fixed(const Fixed &cpy_obj);
        Fixed &operator=(const Fixed &src);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif