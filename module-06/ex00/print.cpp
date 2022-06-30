#include "main.hpp"

void printNan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
	std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
}

void printInf(bool isPositive)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (isPositive)
	{
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
	}
	else
	{
		std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
	}
}

void printChar(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void printIntFloatDouble(std::string const& str)
{
	std::stringstream ss;
	double d;

	ss << str;
	ss >> d;

	if (ss.fail())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		if (d <= std::numeric_limits<char>::max() && d >= std::numeric_limits<char>::min()
				&& isprint(d))
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
		if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min())
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		if (d <= std::numeric_limits<float>::max() && d >= -std::numeric_limits<float>::max())
			std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
}
