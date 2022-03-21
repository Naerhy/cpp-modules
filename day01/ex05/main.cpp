#include "Karen.hpp"

int main(void)
{
	Karen test;

	test.complain("debug");
	// test.complain("info");
	test.complain("warning");
	// test.complain("error");
	test.complain("invalid");
	return (0);
}
