#include <iostream>
#include <math.h>

int main() 
{
	double x;
    std::cin >> x;

    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << std::sqrt(x * x * x * x + 1) / (x * x) - std::sqrt((x * x) / (x * x +1));
	return 0;
}

/*Find the value of the variable y for a given real value of the variable x.
y = sqrt(x^4 + 1) / x^2 - sqrt(x^2 / (x^2 + 1))*/