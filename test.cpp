#include <iostream>

double squared(double x)
{
	return x * x;
}

int main()
{
	if(squared(5) == 25)
	{
		std::cout << "Test Passed\n";
	}
	return 0;
}