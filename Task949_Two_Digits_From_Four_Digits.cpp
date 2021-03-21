#include <iostream>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    if(n[1] == '0') std::cout << n[2] << std::endl;
    else std::cout << n[1] << n[2] << std::endl;

    return 0;
}

/*You are given a four digit positive integer. 
Obtain from it a two digit number consisting of its middle digits.*/