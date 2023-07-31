/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:31:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/01 04:14:24 by jgoldste         ###   ########.fr       */
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
		Fixed(const Fixed& sourceFixed);
		Fixed& operator=(const Fixed& sourceFixed);
		~Fixed();



		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif