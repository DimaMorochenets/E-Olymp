#include <iostream>

int main() 
{
	double x;
    std::cin >> x;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << ((x * x + 3 * x - 4) / (2 * x - 3)) - ((x + 2) / (x * x - 5 * x + 7));

	return 0;
}

/*Find the value of the variable y for a given real value of the variable x.
y = (x^2 + 3x - 4) / (2x - 3) - (x + 2) / (x^2 - 5x + 7)*/