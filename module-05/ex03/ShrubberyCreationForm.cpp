#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("ShrubberyCreationForm: " + target, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
	: Form(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::executeConcreteForm(void) const
{
	std::ofstream outf;
	outf.open((_target + "_shrubbery").c_str(),
			std::ofstream::out | std::ofstream::trunc);
	if (outf.is_open())
	{
		outf << "       ###" << std::endl;
		outf << "      #o###" << std::endl;
		outf << "    #####o###" << std::endl;
		outf << "   #o#\\#|#/###" << std::endl;
		outf << "    ###\\|/#o#" << std::endl;
		outf << "     # }|{  #" << std::endl;
		outf << "       }|{" << std::endl;
		outf.close();
	}
}
