/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:31:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/01 06:04:25 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					_raw;
		static const int	_fract_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& otherFixed);
		Fixed& operator=(const Fixed& otherFixed);
		~Fixed();



		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif