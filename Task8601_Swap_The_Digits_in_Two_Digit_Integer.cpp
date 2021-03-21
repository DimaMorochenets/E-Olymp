#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if(a % 10) std::cout << a % 10 << a / 10 << std::endl;
    else std::cout << a / 10 << std::endl;

    return 0;
}

/*Given two-digit positive integer. Print the number after swapping its digits*/