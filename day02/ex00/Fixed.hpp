#pragma once

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& tmp);
		~Fixed();
		int	getRawBits() const;
		void setRawBits(int const raw);
		void operator=(const Fixed& tmp);
	private:
		static const int bits = 8;
		int fNum;
};
