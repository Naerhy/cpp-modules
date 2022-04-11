#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 128);
		std::cout << A << std::endl;
		A.demote();
		std::cout << A << std::endl;
		Bureaucrat B(A);
		std::cout << B << std::endl;
		B.promote();
		std::cout << B << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
