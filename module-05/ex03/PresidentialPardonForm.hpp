#ifndef __PRESIDENTIAL_PARDON_FORM_HPP__
#define __PRESIDENTIAL_PARDON_FORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const _target;

		PresidentialPardonForm& operator=(PresidentialPardonForm const& assign);

	public:
		PresidentialPardonForm(std::string const& target);
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		virtual ~PresidentialPardonForm(void);

		std::string const& getTarget(void) const;

		virtual void executeDerived(void) const;
};

#endif
