#include <iostream>
#include <string>

int main()
{
    char digits[10] = {0};
    std::string number;

    std::cin >> number;
    for(const auto& i:number)
        digits[i - '0']++;

    for(size_t i = 9; i > 0 ; i--)
        if(digits[i]) {
            std::cout << (int)digits[i] << std::endl;
            break;
        }

    return 0;
}

/*Find out how many times the maximum digit appears in positive integer n*/