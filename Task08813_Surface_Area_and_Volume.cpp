#include <iostream>

int main()
{
    int64_t a, b, c;
    std::cin >> a >> b >> c;
    std::cout << 2 * (a * b + b * c + a * c) << " " << a * b * c << std::endl;

    return 0;
}

/*Find the surface area and volume of the rectangular parallelepiped by its dimensions*/