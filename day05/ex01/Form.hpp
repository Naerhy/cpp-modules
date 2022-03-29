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

	Form &operator=(Form const &copy); // private because useless with const members

public:
	Form(std::string const &name, int gradeToSign, int gradeToExec);
	Form(Form const &copy);
	~Form(void);

	std::string const &getName(void) const;
	bool getIsSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExec(void) const;

	void beSigned(Bureaucrat const &signer);

	class GradeTooHighException : public std::exception
	{
	private:
		std::string _message;
	public:
		GradeTooHighException(std::string const &message);
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	private:
		std::string _message;
	public:
		GradeTooLowException(std::string const &message);
		const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif
