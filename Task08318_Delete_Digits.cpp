#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    for(const auto& i:str)
        if(i != '3' && i != '9')
            std::cout << i;

    return 0;
}

/*One positive integer n is given. 
Remove from this number all digits 3 and 9, leaving the order of other digits the same.
For example, the number 539013 will be transformed to 501.*/