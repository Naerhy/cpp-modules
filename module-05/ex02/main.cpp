#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 12);
		std::cout << A << std::endl;

		RobotomyRequestForm F1("F1");
		std::cout << F1 << std::endl;

		A.signForm(F1);
		A.executeForm(F1);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat B("Antoine", 140);
		std::cout << B << std::endl;

		ShrubberyCreationForm F2("F2");
		std::cout << F2 << std::endl;

		B.signForm(F2);
		B.executeForm(F2);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat C("Emilie", 10);
		std::cout << C << std::endl;

		PresidentialPardonForm F3("F3");
		std::cout << F3 << std::endl;

		C.signForm(F3);
		C.executeForm(F3);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
