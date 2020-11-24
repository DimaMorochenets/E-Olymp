#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << (a % 10) % (a / 100) << std::endl;

    return 0;
}

/*Find the remainder after dividing the last digit by the first in the given positive three-digit integer*/