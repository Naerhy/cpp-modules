#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("RobotomyRequestForm: " + target, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
	: Form(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::executeConcreteForm(void) const
{
	std::cout << "Drilling noises..." << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "Unable to robotomize " << _target << std::endl;
}
