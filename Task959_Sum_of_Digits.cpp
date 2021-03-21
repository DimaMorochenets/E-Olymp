#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << n / 1000 + n % 10 << std::endl;

    return 0;
}

/*Find the sum of the first and the last digit in four-digit positive integer*/