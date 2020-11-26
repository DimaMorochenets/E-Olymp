#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if(n < 0) n *= -1;
    if(n / 100 > n % 10) std::cout << n / 100 << std::endl;
    else if (n / 100 < n % 10) std::cout << n % 10 << std::endl;
    else std::cout << "=" << std::endl;

    return 0;
}