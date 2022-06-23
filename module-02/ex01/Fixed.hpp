#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
	private:
		int _fixedNb;
		static int const _fractionalBits;

	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &copy);
		~Fixed(void);

		Fixed& operator=(Fixed const &copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& fixed);

#endif
