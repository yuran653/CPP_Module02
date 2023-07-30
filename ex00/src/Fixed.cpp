/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 03:30:07 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/31 04:55:34 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_number_value = 0;
}

Fixed::Fixed(const Fixed& sourceFixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = sourceFixed;
}

Fixed& Fixed::operator = (const Fixed& sourceFixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &sourceFixed)
		return *this;
	_number_value = sourceFixed.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _number_value;
}

void	Fixed::setRawBits(int const raw) {
	_number_value = raw;
}
