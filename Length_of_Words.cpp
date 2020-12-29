#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<size_t> lengths;
    std::string word;
    while(std::cin >> word && !word.empty())
        lengths.push_back(word.size());
    
    for(const auto& i:lengths) std::cout << i << " ";

    return 0;
}

/*Given text - sequence of words. 
Find the length of each word.*/