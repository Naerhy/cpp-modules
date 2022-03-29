#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 150);
		std::cout << A << std::endl;
		A.demote();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
