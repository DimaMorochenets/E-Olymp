#include <iostream>
#include <string>

int main()
{
    size_t two = 0, five = 0;
    char num;
    while(std::cin >> num)
        num == '2' ? two++:five++;
    if(two == five) std::cout << "=" << std::endl;
    else if(two > five) std::cout << 2 << std::endl;
    else std::cout << 5 << std::endl;

    return 0;
}

/*Peter the boy gets only twos and fives at school. 
Find which grades more.*/