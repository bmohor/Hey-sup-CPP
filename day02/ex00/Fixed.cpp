#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fNum = 0;
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
