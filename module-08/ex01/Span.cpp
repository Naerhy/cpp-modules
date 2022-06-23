#include "Span.hpp"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(Span const &copy) : _span(copy._span), _maxSize(copy._maxSize) {}

Span::~Span(void) {}

Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		_span = copy._span;
		_maxSize = copy._maxSize;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (_span.size() >= _maxSize)
		throw std::length_error("unable to exceed max size");
	_span.push_back(number);
}

int Span::shortestSpan(void)
{
	if (_span.size() < 2)
		throw std::logic_error("insufficient numbers in vector");

	std::sort(_span.begin(), _span.end());

	std::vector<int>::const_iterator begin = _span.begin();
	std::vector<int>::const_iterator end = _span.end();
	int distance = *(begin + 1) - *begin;

	while (begin + 1 != end)
	{
		if (*(begin + 1) - *begin < distance)
			distance = *(begin + 1) - *begin;
		begin++;
	}
	return distance;
}

int Span::longestSpan(void)
{
	if (_span.size() < 2)
		throw std::logic_error("insufficient numbers in vector");

	std::sort(_span.begin(), _span.end());

	return *(_span.end() - 1) - *(_span.begin());
}

void Span::fillSpan(std::vector<int>::const_iterator begin,
		std::vector<int>::const_iterator end)
{
	while (begin != end)
	{
		if (_span.size() >= _maxSize)
			throw std::length_error("unable to exceed max size");
		_span.push_back(*begin);
		begin++;
	}
}
