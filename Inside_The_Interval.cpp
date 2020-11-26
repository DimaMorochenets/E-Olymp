#include <iostream>

int main()
{
    int x, a, b;
    std::cin >> x >> a >> b;
    if((x >= a && x <= b) || (x <= a && x >= b))
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}

/*Determine whether the number x belongs to the interval [a; b]. 
Number x belongs to the interval [a; b] if a ≤ x ≤ b*/