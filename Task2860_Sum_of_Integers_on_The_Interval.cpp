#include <iostream>

int main()
{
    int64_t a, b;
    std::cin >> a >> b;
    int64_t n = b - a;
    std::cout << n * (a + b) / 2 << std::endl;

    return 0;
}

/*Find the sum of all integers from a to b.*/