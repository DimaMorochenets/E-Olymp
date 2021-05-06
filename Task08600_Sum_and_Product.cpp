#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << a / 10 + a % 10 << " " << (a / 10) * (a % 10) << std::endl;

    return 0;
}

/*Given two-digit positive integer. Find the sum and the product of its digits*/