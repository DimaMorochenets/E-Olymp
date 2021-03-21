#include <iostream>

int main()
{
    int sum = 0;
    char c;
    for(int i = 0; i <  4; i++){
        c = getchar();
        sum += c - '0';
    }
    std::cout << sum * sum << std::endl;

    return 0;
}

/*Find the square of sum of digits for a four digital positive integer*/