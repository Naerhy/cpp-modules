#ifndef __ITER_HPP__
#define __ITER_HPP__

template <typename T>
void iter(T *array, int length, void (*fnct)(T &))
{
	for (int i = 0; i < length; i++)
		fnct(array[i]);
}

#endif
