#include "main.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}

	std::string str(argv[1]);
	if (!str.length())
	{
		std::cout << "Error: empty argument given" << std::endl;
		return 1;
	}

	if (!str.compare("+inf") || !str.compare("+inff"))
		printInf(true);
	if (!str.compare("-inf") || !str.compare("-inff"))
		printInf(false);
	if (!str.compare("nan") || !str.compare("nanf"))
		printNan();
	if (isChar(str))
		printChar(str[0]);
	if (isInt(str) || isDouble(str) || isFloat(str))
		printIntFloatDouble(str);
	return 0;
}
