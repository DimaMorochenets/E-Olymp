#include <iostream>
#include <math.h>

int main() 
{
	double x, y;
    std::cin >> x >> y;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << (x * x - 2 * x * y + y * y *4) / (x + 5) + (x * x * 3 - y * y) / (y -7);
	return 0;
}

/*Find the value of expression for the given values of the variables x and y.
z = (x^2 - 2xy + 4y^2) / (x + 5) + (3x^2 - y^2) / (y -7)*/