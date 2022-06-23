#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form("PresidentialPardonForm: " + target, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
	: Form(copy), _target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::executeConcreteForm(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox"
		<< std::endl;
}
