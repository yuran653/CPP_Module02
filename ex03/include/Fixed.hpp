/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:44:03 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/03 06:24:14 by jgoldste         ###   ########.fr       */
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
		Fixed(const Fixed& otherFixed);
		~Fixed();
		Fixed&	operator=(const Fixed& otherFixed);
		Fixed	operator+(const Fixed& otherFixed) const;
		Fixed	operator-(const Fixed& otherFixed) const;
		Fixed	operator*(const Fixed& otherFixed) const;
		Fixed	operator/(const Fixed& otherFixed) const;
		bool	operator>(const Fixed& otherFixed) const;
		bool	operator<(const Fixed& otherFixed) const;
		bool	operator>=(const Fixed& otherFixed) const;
		bool	operator<=(const Fixed& otherFixed) const;
		bool	operator==(const Fixed& otherFixed) const;
		bool	operator!=(const Fixed& otherFixed) const;
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed&	operator++();
		Fixed&	operator--();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed&, Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static const Fixed&	max(const Fixed&, const Fixed&);
};

std::ostream&	operator<<(std::ostream& output, const Fixed& Fixed);

#endif
