#include <iostream>
#include <math.h>

int main() 
{
	double x;
    std::cin >> x;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << (2 * x - 1) / (x * x) + std::sqrt(x * x + 1) / 2;

	return 0;
}

/*Find the value of the variable y for a given real value of the variable x.
y = (2x - 1) / x^2 + sqrt(x^2 + 1) / 2*/