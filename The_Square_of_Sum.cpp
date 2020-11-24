#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << (n / 10 + n % 10) * (n / 10 + n % 10) << std::endl;

    return 0;
}

/*Find the square of sum of digits of two digit positive integer.*/