#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a == b && b == c) std::cout << 1 << std::endl;
    else if(a == b || a == c || b == c) std::cout << 2 << std::endl;
    else std::cout << 3 << std::endl;

    return 0;
}

/*Find the triangle type (equilateral, isosceles, scalene) if the lengths of its sides are given.
Print 1 if the triangle is equilateral, 2 if isosceles and 3 if scalene*/