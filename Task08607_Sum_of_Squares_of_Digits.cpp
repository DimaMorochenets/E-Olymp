#include <iostream>

int main()
{
    int sum = 0;
    char c;
    for(int i = 0; i < 4; i++){
        c = getchar();
        sum += (c - '0') * (c - '0');
    }
    std::cout << sum << std::endl;

    return 0;
}

/*Four-digit positive integer is given. 
Find the sum of squares of its digits.*/