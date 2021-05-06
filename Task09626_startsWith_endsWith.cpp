#include <iostream>
#include <string>

bool check(const std::string&, const std::string&, size_t);

int main()
{
    std::string first;
    std::string second;
    std::string third;
    std::cin >> first >> second >> third;

    std::cout << std::boolalpha;
    std::cout << check(first, second, 0) << std::endl << check(first, third, first.size() - third.size());

    getchar();
    getchar();
    return 0;
}
bool check(const std::string& first, const std::string& second, size_t start)
{
    if(first.size() < second.size()) return false;
    for(size_t i = 0; i < second.size(); i++)
        if(first[start + i] != second[i])
            return false;
    return true;
}

/*Three lines of characters is given. 
Check if the second line is a prefix of the first line. 
Check if the third line is a suffix of the first line.*/