#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <stdexcept>
#include <cstddef>

template <typename T>
class Array
{
private:
	T *_array;
	int _size;

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const &copy);
	~Array(void);
	Array &operator=(Array const &copy);

	int size(void) const;
	T &operator[](int index);
};

#include "Array.tpp" // include template implementation

#endif
