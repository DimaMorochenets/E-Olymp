#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << (n / 100) * ((n / 10) % 10) * (n % 10) << std::endl;

    return 0;
}

/*Three digital number is given. Find the product of its digits.*/