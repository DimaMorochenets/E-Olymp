#include <iostream>
#include <string>

int main()
{
	uint64_t base;
    uint64_t factorial = 1;

	std::cin >> base;
    for(uint64_t i = 1; i <= base; i++)
		factorial *= i;

	std::cout << factorial << std::endl;

	return 0;
}

/*Find the factorial of a number (n!).
One integer n (0 ≤ n ≤ 20).*/