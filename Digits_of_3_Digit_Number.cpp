#include <iostream>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    for(const auto& i:n) std::cout << i << " ";

    return 0;
}

/*Positive 3-digit integer is given. Print this number with spaces between the digits*/