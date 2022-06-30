#include "main.hpp"

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
