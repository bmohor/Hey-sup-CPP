#include "Point.hpp"

Point::Point() {
}
Point::~Point() {
}
Fixed Point::getterx() const {
	return x;
}
Fixed Point::gettery() const {
	return y;
}
Point::Point(Point const &tmp) {
	*this = tmp;
}
Point::Point(const float tmp1, const float tmp2) : x(tmp1), y(tmp2) {
	return;
}
Point& Point::operator=(Point const& tmp) {
	if (this == &tmp)
		return *this;
	return *this;
}
