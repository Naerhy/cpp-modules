#ifndef __ITER_HPP__
#define __ITER_HPP__

template <typename T>
void iter(T* array, int size, void (*fnct)(T&))
{
	for (int i = 0; i < size; i++)
		fnct(array[i]);
}

#endif
