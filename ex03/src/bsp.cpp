/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:48:56 by jgoldste          #+#    #+#             */
/*   Updated: 2023/08/03 07:49:47 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float p = ((a.getX() - point.getX()) * (b.getY() - a.getY())
		- (b.getX() - a.getX()) * (a.getY() - point.getY()));
	float q = ((b.getX() - point.getX()) * (c.getY() - b.getY())
		- (c.getX() - b.getX()) * (b.getY() - point.getY()));
	float r = ((c.getX() - point.getX()) * (a.getY() - c.getY())
		- (a.getX() - c.getX()) * (c.getY() - point.getY()));
	if ((p >= 0 && q >= 0 && r >= 0) || (p <= 0 && q <= 0 && r <= 0))
		return true;
	return false;
}



int main () {
	Point a(0.5f, 0);
	Point b(4, 2.75f);
	Point c(1.75f, 3.4f);
	Point p(2.3f, 2.9f);

	Point a_test(0.5f, 0);
	Point b_test(4, 2.75f);
	Point c_test(1.75f, 3.4f);
	Point p_test(2.3f, 2.9f);

	Point a_copy = a_test;
	Point b_copy = b_test;
	Point c_copy(c_test);
	Point p_copy(p_test);

	if (bsp (a, b, c, p) == true) {
		std::cout << std::endl;
		std::cout << "The point P(" << p.getX() << ";" << p.getY() << ")" << std::endl;
		std::cout << "IS INSIDE the triangle ABC" << std::endl;
		std::cout << "A(" << a.getX() << ";" << a.getY()
			<< "); B(" << b.getX() << ";" << b.getY()
			<< "); C(" << c.getX() << ";" << c.getY() << ")" << std::endl;
	} else {
		std::cout << "The point P(" << p.getX() << ";" << p.getY() << ")" << std::endl;
		std::cout << "IS NOT INSIDE the triangle ABC" << std::endl;
		std::cout << "A(" << a.getX() << ";" << a.getY()
			<< "); B(" << b.getX() << ";" << b.getY()
			<< "); C(" << c.getX() << ";" << c.getY() << ")" << std::endl;
	}
	std::cout << std::endl;
	if (bsp (a_copy, b_copy, c_copy, p_copy) == true) {
		std::cout << std::endl;
		std::cout << "The point P(" << p_copy.getX() << ";" << p_copy.getY() << ")" << std::endl;
		std::cout << "IS INSIDE the triangle ABC" << std::endl;
		std::cout << "A(" << a_copy.getX() << ";" << a_copy.getY()
			<< "); B(" << b_copy.getX() << ";" << b_copy.getY()
			<< "); C(" << c_copy.getX() << ";" << c_copy.getY() << ")" << std::endl;
	} else {
		std::cout << "The point P(" << p_copy.getX() << ";" << p_copy.getY() << ")" << std::endl;
		std::cout << "IS NOT INSIDE the triangle ABC" << std::endl;
		std::cout << "A(" << a_copy.getX() << ";" << a_copy.getY()
			<< "); B(" << b_copy.getX() << ";" << b_copy.getY()
			<< "); C(" << c_copy.getX() << ";" << c_copy.getY() << ")" << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
