#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat; // forward declaration to avoid circular dependencies

class Form
{
private:
	std::string const _name;
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExec;
	Form &operator=(Form const &copy);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what(void) const throw();
	};

public:
	Form(std::string const &name, int gradeToSign, int gradeToExec);
	Form(Form const &copy);
	~Form(void);

	std::string const &getName(void) const;
	bool getIsSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExec(void) const;

	void beSigned(Bureaucrat const &signer);
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif
