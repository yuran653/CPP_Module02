/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:30:07 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/01 04:14:50 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::Fixed(const Fixed& sourceFixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = sourceFixed;
}

Fixed& Fixed::operator=(const Fixed& sourceFixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &sourceFixed)
		return *this;
	_raw = sourceFixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	_raw = raw;
}
