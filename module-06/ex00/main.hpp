#ifndef __MAIN_HPP__
#define __MAIN_HPP__

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <limits>

void printNan(void);
void printInf(bool isPositive);
void printChar(char c);
void printIntFloatDouble(std::string const& str);

int countOccurrences(std::string const& str, char c);
bool isChar(std::string const& str);
bool isInt(std::string const& str);
bool isDouble(std::string const& str);
bool isFloat(std::string const& str);

#endif
