#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a + b <= c || a + c <= b || b + c <= a)
        std::cout << "NO" << std::endl;
    else std::cout << "YES" << std::endl;

    return 0;
}

/*Given the lengths of three segments. 
Is it possible to construct from them the non-degenerate triangle?
The triangle is non-degenerate if it has positive area.*/