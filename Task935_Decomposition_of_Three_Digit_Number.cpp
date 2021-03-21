#include <iostream>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    for(const auto& i:n){
        if(i == '-') continue;
        std::cout << i << std::endl;
    }

    return 0;
}

/*Decompose a given 3-digit number to digits.*/
