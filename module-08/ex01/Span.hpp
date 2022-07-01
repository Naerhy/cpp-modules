#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		std::vector<int> _span;
		unsigned int _maxSize;

	public:
		Span(unsigned int n);
		Span(Span const& copy);
		~Span(void);
		Span& operator=(Span const& assign);

		unsigned int getMaxSize(void) const;

		void addNumber(int number);
		int shortestSpan(void);
		int longestSpan(void);

		void fillSpan(std::vector<int>::const_iterator begin,
				std::vector<int>::const_iterator end);

		void printStoredNumbers(void) const;
};

#endif
