#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I really do!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! "
		<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
		<< "I've been coming for years whereas you started working here "
		<< "since last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Karen::complain(std::string const &level)
{
	if (level == "debug" || level == "info" || level == "warning"
			|| level == "error")
	{
		void (Karen::*fnct[4])(void);
		fnct[0] = &Karen::debug;
		fnct[1] = &Karen::info;
		fnct[2] = &Karen::warning;
		fnct[3] = &Karen::error;

		std::string commands[4];
		commands[0] = "debug";
		commands[1] = "info";
		commands[2] = "warning";
		commands[3] = "error";

		for (int i = 0; i < 4; i++)
		{
			if (commands[i] == level)
				(this->*fnct[i])();
		}
	}
}
