#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream inf;
	std::ofstream outf;
	std::string text;
	std::string line;
	std::size_t occurence;
	std::string args[3];

	if (argc != 4)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}

	args[0] = argv[1];
	args[1] = argv[2];
	args[2] = argv[3];

	inf.open(args[0].c_str());
	if (!inf.is_open())
	{
		std::cout << "Error: unable to open file" << std::endl;
		return 1;
	}

	while (1)
	{
		std::getline(inf, line);
		if (inf.good())
		{
			text.append(line);
			text.push_back(10);
		}
		else
			break;
	}
	inf.close();
	if (!inf.eof())
	{
		std::cout << "Error: cannot read file" << std::endl;
		return 1;
	}
	while (1)
	{
		occurence = text.find(args[1]);
		if (occurence == std::string::npos)
			break;
		text.erase(occurence, args[1].length());
		text.insert(occurence, args[2]);
	}

	outf.open((args[0] + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!outf.is_open())
	{
		std::cout << "Error: unable to open file" << std::endl;
		return 1;
	}
	outf << text;
	outf.close();
	return 0;
}
