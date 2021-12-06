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
	fNum = 0;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& tmp) {
	stream << tmp.toFloat();
	return stream;
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed&	Fixed::operator++(void) {
	fNum++;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed&	Fixed::operator--(void) {
	fNum--;
	return *this;
}

Fixed &Fixed::operator=(Fixed const &tmp) {
	fNum = tmp.toFloat();
	return *this;
}

Fixed::Fixed(const Fixed& tmp) {
	fNum = tmp.getRawBits();
}

Fixed::~Fixed() {
}

int Fixed::getRawBits() const {
	return fNum;
}

void Fixed::setRawBits(int const raw) {
	fNum = raw;
}

bool Fixed::operator>(const Fixed& tmp) {
	return (toFloat() > tmp.toFloat());
}

bool Fixed::operator<(const Fixed& tmp) {
	return (toFloat() < tmp.toFloat());
}

bool Fixed::operator>=(const Fixed& tmp) {
	return (toFloat() >= tmp.toFloat());
}

bool Fixed::operator<=(const Fixed& tmp) {
	return (toFloat() <= tmp.toFloat());
}

bool Fixed::operator==(const Fixed& tmp) {
	return (toFloat() == tmp.toFloat());
}

bool Fixed::operator!=(const Fixed& tmp) {
	return (toFloat() != tmp.toFloat());
}

Fixed	Fixed::operator+(const Fixed& tmp) {
	return (toFloat() + tmp.toFloat());
}

Fixed	Fixed::operator-(const Fixed& tmp) {
	return (toFloat() - tmp.toFloat());
}

Fixed	Fixed::operator*(Fixed tmp) {
	return (toFloat() * tmp.toFloat());
}

Fixed	Fixed::operator/(const Fixed& tmp) {
	return (toFloat() * tmp.toFloat());
}
Fixed& Fixed::min( Fixed& tmp, Fixed& tmp2)
{
    return (tmp.toFloat() < tmp2.toFloat() ? tmp : tmp2);
}
const Fixed& Fixed::min( const Fixed& tmp, const Fixed& tmp2)
{
    return (tmp.toFloat() < tmp2.toFloat() ? tmp : tmp2);
}

Fixed& Fixed::max( Fixed& tmp, Fixed& tmp2)
{
    return (tmp.toFloat() > tmp2.toFloat() ? tmp : tmp2);
}
const Fixed& Fixed::max( const Fixed& tmp, const Fixed& tmp2)
{
    return (tmp.toFloat() > tmp2.toFloat() ? tmp : tmp2);
}
