#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template <typename T>
void swap(T& x, T& y)
{
	T temp = x;

	x = y;
	y = temp;
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return x;
	return y;
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return x;
	return y;
}

#endif
