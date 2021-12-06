#pragma once
#include "Fixed.hpp"

class Point {
	public:
		Point();
		~Point();
		Point(Point const& tmp);
		Point(const float tmp1, const float tmp2);
		Fixed getterx() const;
		Fixed gettery() const;
		Point& operator=(Point const& tmp);
	private:
		Fixed const x;
		Fixed const y;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);
