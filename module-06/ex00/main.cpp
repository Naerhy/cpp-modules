#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <limits>

int countOccurrences(std::string const& str, char c)
{
	int occurrences = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == c)
			occurrences++;
	}
	return occurrences;
}

bool isChar(std::string const& str)
{
	if (str.length() == 1 && isprint(str[0]))
		return true;
	return false;
}

bool isInt(std::string const& str)
{
	if (str.find_first_not_of("0123456789") == std::string::npos || (!str.find_first_of("+-")
			&& str.find_first_not_of("0123456789", 1) == std::string::npos))
		return true;
	return false;
}

bool isDouble(std::string const& str)
{
	if (countOccurrences(str, '.') == 1 && (str.find_first_of(".")
			&& str.find_first_of(".") != str.length() - 1)
			&& (str.find_first_not_of("0123456789.") == std::string::npos
			|| (!str.find_first_of("+-")
			&& str.find_first_not_of("0123456789.", 1) == std::string::npos)))
		return true;
	return false;
}

bool isFloat(std::string const& str)
{
	if (countOccurrences(str, 'f') == 1 && str.find_first_of("f") == str.length() - 1
			&& countOccurrences(str, '.') == 1 && (str.find_first_of(".")
			&& str.find_first_of(".") != str.length() - 1)
			&& (str.find_first_not_of("0123456789.f") == std::string::npos
			|| (!str.find_first_of("+-")
			&& str.find_first_not_of("0123456789.f", 1) == std::string::npos)))
		return true;
	return false;
}

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

void printInt(double d)
{
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min() && isprint(d))
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void printDouble(double d)
{
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min() && isprint(d))
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

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
	std::stringstream ss;
	double number;
	if (isInt(str))
	{
		ss << str;
		ss >> number;
		printInt(number);
	}
	if (isChar(str))
	{
		printChar(str[0]);
	}
	if (isDouble(str))
	{
		ss << str;
		ss >> number;
		printDouble(number);
	}
	// TO NOT FORGET TO HANDLE FLOAT
	// TO NOT FORGET TO HANDLE FLOAT
	// TO NOT FORGET TO HANDLE FLOAT
	if (isFloat(str))
		std::cout << "FLOAT" << std::endl;
	return 0;
}
