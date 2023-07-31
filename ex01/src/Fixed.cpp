/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:45:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/01 05:30:04 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_raw = value << _fract_bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	_raw = (int)roundf(value * (1 << _fract_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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

int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	_raw = raw;
}

float	Fixed::toFloat(void) const {
	return (float)_raw / (1 << _fract_bits); 
}

int		Fixed::toInt(void) const {
	return _raw >> _fract_bits;
}

std::ostream& operator<<(std::ostream& output, const Fixed& Fixed){
	output << Fixed.toFloat();
	return output;
}
