#ifndef __ARRAY_TPP__
#define __ARRAY_TPP__

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &copy) : _array(NULL), _size(copy._size)
{
	if (_size)
	{
		_array = new T[_size];
		for (int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
}

template <typename T>
Array<T>::~Array(void)
{
	if (_array)
		delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (_size)
		delete[] _array;
	_size = copy._size;
	if (_size)
	{
		_array = new T[_size];
		for (int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
	return *this;
}

template <typename T>
int Array<T>::size(void) const { return _size; }

template <typename T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index >= _size)
		throw std::out_of_range("invalid index for this array");
	return _array[index];
}

#endif
