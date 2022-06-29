#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	Form* F1 = intern.makeForm("robotomy request", "F1");
	Form* F2 = intern.makeForm("shrubbery creation", "F2");
	Form* F3 = intern.makeForm("presidential pardon", "F3");
	Form* F4 = intern.makeForm("random name", "F4");
	if (!F4)
		std::cout << "F4 is NULL" << std::endl;

	std::cout << std::endl;

	try
	{
		Bureaucrat A("Quentin", 12);
		std::cout << A << std::endl;

		std::cout << *F1 << std::endl;

		A.signForm(*F1);
		A.executeForm(*F1);
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

		std::cout << *F2 << std::endl;

		B.signForm(*F2);
		B.executeForm(*F2);
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

		std::cout << *F3 << std::endl;

		C.signForm(*F3);
		C.executeForm(*F3);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	delete F1;
	delete F2;
	delete F3;
	delete F4;

	return 0;
}
