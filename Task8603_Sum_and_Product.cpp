#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << (a / 100) + ((a / 10) % 10) + (a % 10) << " ";
    std::cout << (a / 100) * ((a / 10) % 10) * (a % 10) << std::endl;

    return 0;
}

/*Given three-digit positive integer. Find the sum and the product of its digits*/