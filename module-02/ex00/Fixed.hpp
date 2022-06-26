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
		Fixed(Fixed const& copy);
		~Fixed(void);

		Fixed& operator=(Fixed const& copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
