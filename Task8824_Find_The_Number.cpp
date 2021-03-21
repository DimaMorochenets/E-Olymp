#include <iostream>

int main()
{
    int64_t a, b;
    std::cin >>  a >> b;
    (a < b) ? std::cout << a + 1 << std::endl:std::cout << b + 1 << std::endl;

    return 0;
}

/*Find the integer value of n, if its previous and next numbers are known*/