#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 3);
		PresidentialPardonForm B("Quentin");
		RobotomyRequestForm C("001");
		ShrubberyCreationForm D("pine");

		A.signForm(B);
		A.executeForm(B);

		A.signForm(C);
		A.executeForm(C);

		A.signForm(D);
		A.executeForm(D);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
