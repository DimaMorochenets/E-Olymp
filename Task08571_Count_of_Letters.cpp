#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    int count = 0;
    char key;
    std::cin >> key;
    for(const auto& i:str)
        if(i == key || i == key - 32)
            count++;
    std::cout << count << std::endl;

    return 0;
}

/*Given a string s and a letter c. 
How many times the letter appears in the string?*/