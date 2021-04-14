#include <iostream>
#include <math.h>
#include <list>

int main()
{
    double x, y;
    std::list<double> res;

    while (std::cin >> x >> y) res.push_back(x * x + std::sin(x * y) - y * y);

	std::cout << std::fixed; std::cout.precision(4);
	for (const auto &i : res) std::cout << i << std::endl;

    return 0;
}

/*Implement a function f(x, y) = x^2 + sin(x * y) - y^2*/