#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
	Bureaucrat &operator=(Bureaucrat const &copy);

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
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat(void);

	std::string const &getName(void) const;
	int getGrade(void) const;
	void promote(void);
	void demote(void);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
