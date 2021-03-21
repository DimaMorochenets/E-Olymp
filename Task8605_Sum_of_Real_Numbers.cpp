#include <iostream>

int main() 
{
	double x, y, z;
    std::cin >> x >> y >> z;

    std::cout << std::fixed;
    std::cout.precision(4);
    std::cout << x + y << " " << x + z << " " << y + z;

	return 0;
}

/*Three real numbers are given. Find their pairwise sums.
Print in one line the sums x + y, x + z and y + z with 4 decimal digits.*/