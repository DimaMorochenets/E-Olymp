#include <iostream>
#include <string>

int main()
{
    std::string str, a;
    std::getline(std::cin , str);
    for(const auto& i:str)
        if(i == 'a')
            a.push_back(i);
    if(a.empty()) std::cout << -1 << std::endl;
    else std::cout << a << std::endl;

    return 0;
}

/*Print only small Latin letters a found in the given string.*/