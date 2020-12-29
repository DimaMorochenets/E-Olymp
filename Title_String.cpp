#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin , str);
    for(size_t i = 0; i < str.size(); i++){
        while(i < str.size() && str[i] == ' ') i++;
        if(i >= str.size()) break;
        str[i] -= 32;
        while(i < str.size() && str[i] != ' ') i++;
    }
    std::cout << str << std::endl;

    return 0;
}

/*A common word-processing task is capitalizing the first letter of each word in a string. 
You are given a string containing lowercase words separated by one or more space characters. 
Print identical string except with the first character of each word is capitalized.*/