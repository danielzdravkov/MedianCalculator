#include "pch.h"
#include "Median.h"
#include <algorithm>


Median::Median() : _numbers{}, _fast_calc{ false }
{
}

Median::Median(bool fast_calculation)
{
	_fast_calc = fast_calculation;
}


Median::~Median()
{
}

void Median::add(int n)
{
	_numbers.emplace_back(n);
	if (_fast_calc)
		std::sort(_numbers.begin(), _numbers.end());
}

float Median::calculate()
{
	if (_numbers.size() == 0)
		return 0.0f;

	if (!_fast_calc)
		std::sort(_numbers.begin(), _numbers.end());

	if ((_numbers.size() % 2) == 0)
		return ( (_numbers[_numbers.size() / 2 - 1] + _numbers[_numbers.size() / 2]) / 2.0f);

	return float(_numbers[_numbers.size() / 2]);
}

void Median::reset()
{
	_numbers.clear();
}
