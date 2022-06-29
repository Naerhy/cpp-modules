#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 128);
		std::cout << A << std::endl;
		A.demote();
		std::cout << A << std::endl;
		A.promote();
		std::cout << A << std::endl;

		std::cout << "1 - Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat B("Antoine", 200);

		std::cout << "2 - Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat C("Emilie", 1);
		C.promote();

		std::cout << "3 - Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
