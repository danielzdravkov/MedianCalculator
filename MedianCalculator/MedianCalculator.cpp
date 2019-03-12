#include "pch.h"
#include <iostream>

#include "Median.h"
#include <cassert>

int main()
{
	Median median_calculator = Median(true);

	float res;

	res = median_calculator.calculate();
	assert(res == 0.0f);		// ugly attempt for unit testsing since I am using boost for unit testing but do not want to unnecessary complicate the project

	median_calculator.add(1);
	res = median_calculator.calculate();
	assert(res == 1.0f);

	median_calculator.add(2);
	res = median_calculator.calculate();
	assert(res == 1.5f);

	median_calculator.add(3);
	res = median_calculator.calculate();
	assert(res == 2.0f);

	median_calculator.add(4);
	res = median_calculator.calculate();
	assert(res == 2.5f);

	median_calculator.reset();
	res = median_calculator.calculate();
	assert(res == 0.0f);

	median_calculator.add(1);
	median_calculator.add(10);
	median_calculator.add(2);
	median_calculator.add(9);
	median_calculator.add(3);
	median_calculator.add(8);
	median_calculator.add(4);
	median_calculator.add(7);
	res = median_calculator.calculate();
	assert(res == 5.5f);

	median_calculator.reset();
	median_calculator.add(1);
	median_calculator.add(10);
	median_calculator.add(2);
	median_calculator.add(9);
	median_calculator.add(3);
	median_calculator.add(8);
	median_calculator.add(4);
	median_calculator.add(7);
	median_calculator.add(5);
	res = median_calculator.calculate();
	assert(res == 5.0f);

}
