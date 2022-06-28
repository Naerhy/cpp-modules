#ifndef __SHRUBBERY_CREATION_FORM_HPP__
#define __SHRUBBERY_CREATION_FORM_HPP__

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const _target;

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& assign);

	public:
		ShrubberyCreationForm(std::string const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		virtual ~ShrubberyCreationForm(void);

		std::string const& getTarget(void) const;

		virtual void executeDerived(void) const;
};

#endif
