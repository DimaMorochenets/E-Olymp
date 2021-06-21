#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a >= b && a <= c) std::cout << a << std::endl;
    else if(b >= a && b <= c) std::cout << b << std::endl;
    else if(c >= a && c <= b) std::cout << c << std::endl;
    else if (a >= c && a <= b) std::cout << a << std::endl;
    else if(b >= c && b <= a) std::cout << b << std::endl;
    else std::cout << c << std::endl;

    return 0;
}

/*Three different numbers a, b, c are given. Print the median number.*/