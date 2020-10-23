#include <iostream>

int main() 
{
	double x;
    std::cin >> x;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << (x * x * x) - (x * x * 5 / 7) + (9 * x) - (3 / x) + 1;

	return 0;
}

/*Find the value of the variable y for a given real value of the variable x.
y = x^3 - 5x^2/7 + 9x - 3/x + 1*/