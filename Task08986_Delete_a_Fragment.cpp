#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    size_t left, right;
    std::cin >> left >> right;

    for(size_t i = 0; i < left; i++) std::cout << str[i];
    for(size_t i = right + 1; i < str.size(); i++) std::cout << str[i];

    getchar();
    getchar();
    return 0;
}