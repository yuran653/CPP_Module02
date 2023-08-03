/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:49:46 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/03 06:16:57 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point& copyPoint);
		~Point();
		Point&	operator=(const Point& copyFixed);

		float	getX() const;
		float	getY() const;
};

#endif
