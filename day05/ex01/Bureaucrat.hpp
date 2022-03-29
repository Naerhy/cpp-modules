#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Form; // forward declaration to avoid circular dependencies

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat(void);
	Bureaucrat &operator=(Bureaucrat const &copy);

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
	std::string const &getName(void) const;
	int getGrade(void) const;
	void promote(void);
	void demote(void);

	void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
