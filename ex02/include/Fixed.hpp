/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:43:06 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/01 06:42:35 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_raw;
		static const int	_fract_bits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed& otherFixed);
		Fixed& operator = (const Fixed& otherFixed);
		Fixed operator + (const Fixed& otherFixed) const;
		Fixed operator - (const Fixed& otherFixed) const;
		Fixed operator * (const Fixed& otherFixed) const;
		Fixed operator / (const Fixed& otherFixed) const;
		Fixed& operator << (const int raw);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& Fixed);

#endif
