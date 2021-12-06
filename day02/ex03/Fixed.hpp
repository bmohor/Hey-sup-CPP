#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& tmp);
		Fixed(const int tmp);
		Fixed(const float tmp);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		Fixed&	operator=(Fixed const& tmp);
		bool	operator>(const Fixed& tmp);
		bool	operator<(const Fixed& tmp);
		bool	operator>=(const Fixed& tmp);
		bool	operator<=(const Fixed& tmp);
		bool	operator==(const Fixed& tmp);
		bool	operator!=(const Fixed& tmp);
		Fixed	operator+(const Fixed& tmp);
		Fixed	operator-(const Fixed& tmp);
		Fixed	operator*(Fixed tmp);
		Fixed	operator/(const Fixed& tmp);
		static Fixed&	min(Fixed& tmp, Fixed& tmp2);
		static Fixed&	max(Fixed& tmp, Fixed& tmp2);
		const static Fixed&	min(const Fixed& tmp, const Fixed& tmp2);
		const static Fixed&	max(const Fixed& tmp, const Fixed& tmp2);
		float	toFloat(void) const;
		int		toInt() const;
	private:
		static const int bit;
		int fNum;
};
std::ostream&	operator<<(std::ostream& stream, const Fixed& tmp);
