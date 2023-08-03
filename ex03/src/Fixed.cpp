/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:44:38 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/03 06:24:08 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_raw = 0;
}

Fixed::Fixed(const int value) {
	_raw = value << _fract_bits;
}

Fixed::Fixed(const float value) {
	_raw = (int)roundf(value * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed& otherFixed) {
	*this = otherFixed;
}

Fixed::~Fixed() {
}

Fixed& Fixed::operator=(const Fixed& otherFixed) {
	if (this == &otherFixed)
		return *this;
	_raw = otherFixed._raw;
	return *this;
}

Fixed Fixed::operator+(const Fixed& otherFixed) const {
	return this->toFloat() + otherFixed.toFloat();
}

Fixed Fixed::operator-(const Fixed& otherFixed) const {
	return this->toFloat() - otherFixed.toFloat();
}

Fixed Fixed::operator*(const Fixed& otherFixed) const {
	return this->toFloat() * otherFixed.toFloat();
}

Fixed Fixed::operator/(const Fixed& otherFixed) const {
	return this->toFloat() / otherFixed.toFloat();
}

bool Fixed::operator>(const Fixed& otherFixed) const {
	return this->toFloat() > otherFixed.toFloat();
}

bool Fixed::operator<(const Fixed& otherFixed) const {
	return this->toFloat() < otherFixed.toFloat();
}

bool Fixed::operator>=(const Fixed& otherFixed) const {
	return this->toFloat() >= otherFixed.toFloat();
}

bool Fixed::operator<=(const Fixed& otherFixed) const {
	return this->toFloat() <= otherFixed.toFloat();
}

bool Fixed::operator==(const Fixed& otherFixed) const {
	return this->toFloat() == otherFixed.toFloat();
}

bool Fixed::operator!=(const Fixed& otherFixed) const {
	return this->toFloat() != otherFixed.toFloat();
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	_raw++;
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	_raw--;
	return temp;
}

Fixed& Fixed::operator++() {
	_raw++;
	return *this;
}

Fixed& Fixed::operator--() {
	_raw--;
	return *this;
}

int		Fixed::getRawBits(void) const {
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	_raw = raw;
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(_raw) / (1 << _fract_bits);
}

int		Fixed::toInt(void) const {
	return _raw >> _fract_bits;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}
Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed){
	output << fixed.toFloat();
	return output;
}
