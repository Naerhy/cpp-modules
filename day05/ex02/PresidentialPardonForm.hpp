#ifndef __PRESIDENTIAL_PARDON_FORM_HPP__
#define __PRESIDENTIAL_PARDON_FORM_HPP__

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	~PresidentialPardonForm(void);

	void executeConcreteForm(void) const;
};

#endif
