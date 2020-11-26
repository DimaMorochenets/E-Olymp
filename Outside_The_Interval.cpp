#include <iostream>

int main()
{
    int x, a, b;
    std::cin >> x >> a >> b;
    if(a > b) std::swap(a, b);
    if(x < a || x > b)
        std::cout << "OUT" << std::endl;
    else std::cout << "IN" << std::endl;

    return 0;
}

/*Determine whether the number x is located outside the interval [a; b]. 
Number x is located outside the interval [a; b] if either x < a or x > b*/