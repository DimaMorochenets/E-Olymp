#include <iostream>
#include <string>

int main()
{
    size_t count = 0;
    std::string word;
    while(std::cin >> word && !word.empty())
        count++;
    std::cout << count << std::endl;

    return 0;
}

/*Find the number of words in the given text.*/