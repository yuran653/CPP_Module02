/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:48:14 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/03 07:33:31 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {
}

Point::Point(const Point& copyPoint) : _x(copyPoint._x), _y(copyPoint._y){
}

Point::~Point() {
}

Point& Point::operator=(const Point& copyPoint) {
	if (this == &copyPoint)
		return *this;
	const_cast<Fixed&>(_x) = copyPoint._x;
	const_cast<Fixed&>(_y) = copyPoint._y;
	return *this;
}

float	Point::getX(void) const {
	return _x.toFloat();
}

float	Point::getY(void) const {
	return _y.toFloat();
}
