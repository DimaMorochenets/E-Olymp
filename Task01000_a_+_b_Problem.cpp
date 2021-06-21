#include <iostream>
#include <vector>

int main()
{
    std::vector<int> rez;
    int a, b;
    while(std::cin >> a >> b)
        rez.push_back(a + b);
    for(const auto& i:rez)
        std::cout << i << std::endl;
    
    return 0;
}

/*Find the value of a + b.*/