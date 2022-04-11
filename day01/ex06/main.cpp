#include "Karen.hpp"

int getIndex(std::string const &level)
{
	if (level == "debug")
		return (0);
	else if (level == "info")
		return (1);
	else if (level == "warning")
		return (2);
	else if (level == "error")
		return (3);
	else
		return (4);
}

int main(void)
{
	Karen test;
	int index;
	
	index = getIndex("info");
	switch (index)
	{
		case 0:
			test.complain("debug");
			index++;
			/* fall through */
		case 1:
			test.complain("info");
			index++;
			/* fall through */
		case 2:
			test.complain("warning");
			index++;
			/* fall through */
		case 3:
			test.complain("error");
			break;
		default:
			std::cout << " [ Probably complaining about insignificant "
				<< "problems ]" << std::endl;
			break;
	}
	return (0);
}
