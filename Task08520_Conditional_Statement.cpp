#include <iostream>

int main()
{
	std::int64_t x;
	std::cin >> x;
	if (x < 5) std::cout << x * x - 3 * x + 4 << std::endl;
	else std::cout << x + 7 << std::endl;

	return 0;
}

/*Find the value of y according to condition:
    x^2 - 3x + 4, x < 5
y = 
    x + 7, x >= 5
*/