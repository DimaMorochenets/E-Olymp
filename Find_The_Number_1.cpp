#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    std::cout << (a % 10) * 100 + (a / 10) << std::endl;

    return 0;
}

/*Three-digit number n was divided by 10. 
When the last digit of n was appended 
to the quotient from the left, we got x. 
Find x if n is known*/