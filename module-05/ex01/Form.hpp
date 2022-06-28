#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExec;

		Form& operator=(Form const& assign);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	public:
		Form(std::string const& name, int gradeToSign, int gradeToExec);
		Form(Form const& copy);
		~Form(void);

		std::string const& getName(void) const;
		bool isSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExec(void) const;

		void beSigned(Bureaucrat const& bc);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& obj);

#endif
