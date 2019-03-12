#include <vector>

class Median
{
public:
	Median();
	Median(bool fast_calculation);
	~Median();

	void add(int n);
	float calculate();
	void reset();

private:
	std::vector<int> _numbers;
	bool _fast_calc;
};

