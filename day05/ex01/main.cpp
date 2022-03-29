#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat A("Quentin", 146);
	std::cout << A << std::endl;
	Form B("something...", 50, 100);
	std::cout << B << std::endl;
	A.signForm(B);

	return 0;
}
