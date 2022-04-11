#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void modifyStr(T &str)
{
	str = "I am a banana!";
}

void multiplyBy2(int &number)
{
	number *= 2;
}

int main(void)
{
	int numbers[4];
	numbers[0] = 3;
	numbers[1] = 6;
	numbers[2] = 12;
	numbers[3] = 24;

	::iter(numbers, 4, &multiplyBy2);
	for (int i = 0; i < 4; i++)
		std::cout << numbers[i] << std::endl;

	std::string strs[2];
	strs[0] = "a random sentence";
	strs[1] = "another sentence";

	::iter(strs, 2, &modifyStr);
	for (int i = 0; i < 2; i++)
		std::cout << strs[i] << std::endl;

	return 0;
}
