#include <iostream>
#include <math.h>

int main() 
{
	double x, y;
    std::cin >> x >> y;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << x * x * 2 - 4 * x * y + y * y * 3 + (x + y) / 7;

	return 0;
}

/*Find the value of expression for the given values of the variables x and y.
z = 2x^2 - 4xy + 3y^2 + (x + y) / 7*/