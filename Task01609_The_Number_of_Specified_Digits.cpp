#include <iostream>
#include <string>

int main()
{
    size_t count = 0;
    std::string number;
    char key;
    std::cin >> number >> key;
    if(number.front() == '-') number.erase(number.begin());
    for(const auto& i:number)
        if(i == key)
            count++;

    std::cout << count << std::endl;

    return 0;
}

/*Count the number of digits a in number n.*/