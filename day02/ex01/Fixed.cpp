#include "Fixed.hpp"

const	int Fixed::bit = 8;

float Fixed::toFloat(void) const {
	return ((float)fNum / (1 << bit));
}

int Fixed::toInt(void) const {
	return ((int)(fNum >> bit));
}

Fixed::Fixed(const int tmp) {
	fNum = tmp << bit;
}

Fixed::Fixed(const float tmp) {
	fNum = roundf(tmp * (1 << bit));
}

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fNum = 0;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& tmp) {
	stream << tmp.toFloat();
	return stream;
}

void Fixed::operator=(const Fixed& tmp) {
	std::cout << "Assignation operator called" << std::endl;
	fNum = tmp.getRawBits();
}

Fixed::Fixed(const Fixed& tmp) {
	std::cout << "Copy constructor called" << std::endl;
	fNum = tmp.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return fNum;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fNum = raw;
}
