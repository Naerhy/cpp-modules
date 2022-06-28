#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
	: Form("RobotomyRequestForm-" + target, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
	: Form(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

std::string const& RobotomyRequestForm::getTarget(void) const { return _target; }

void RobotomyRequestForm::executeDerived(void) const
{
	std::cout << "Brrrrrr!!!" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "Trying to robotomize " << _target << " has failed" << std::endl;
}
