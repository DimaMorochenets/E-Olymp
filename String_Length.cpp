#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::cout << str << std::endl << str.size() << std::endl;

    return 0;
}

/*Given a string. Print it and its length*/