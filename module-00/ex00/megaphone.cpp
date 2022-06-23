#include <iostream>

char *toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			std::cout << toupper(argv[i]);
			if (argc != i + 1)
				std::cout << " ";
			else
				std::cout << std::endl;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	return (0);
}
