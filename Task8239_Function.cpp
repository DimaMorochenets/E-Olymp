#include <iostream>
#include <list>

int main()
{
    double x;
    std::list<double> res;

    while(std::cin >> x) res.push_back(x * x * x + 2.0 * x * x - 3.0);
    std::cout << std::fixed; std::cout.precision(4);
    for(const auto& i:res) std::cout << i << std::endl;

    return 0;
}

/*Implement a function f(x) = x^3 + 2 * x^2 - 3*/