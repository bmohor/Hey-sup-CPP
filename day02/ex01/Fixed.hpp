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
		int	getRawBits() const;
		void setRawBits(int const raw);
		void operator=(const Fixed& tmp);
		float	toFloat(void) const;
		int		toInt() const;
	private:
		static const int bit;
		int fNum;
};
std::ostream&	operator<<(std::ostream& stream, const Fixed& tmp);
