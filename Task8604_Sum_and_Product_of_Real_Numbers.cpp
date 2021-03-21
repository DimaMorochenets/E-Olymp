#include <iostream>

int main() 
{
	double x, y, z;
    std::cin >> x >> y >> z;

    std::cout << std::fixed;
    std::cout.precision(4);
    std::cout << x + y + z << " " << x * y * z;

	return 0;
}

/*Three real numbers are given. Find their sum and product.
Print in one line the sum and the product of three numbers with 4 decimal digits.*/