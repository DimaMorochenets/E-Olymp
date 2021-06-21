#include <iostream>
#include <math.h>

bool is_prime_num(uint32_t);

int main()
{
    uint32_t n;
    std::cin >> n;
    if(is_prime_num(n)) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    return 0;
}
bool is_prime_num(uint32_t n)
{
    if(n == 2) return true;
    for(uint32_t i = 2; i <= std::sqrt(n); i++)
        if(!(n % i)) return false;
    return true;
}

/*Check if the given number is prime. 
The number is prime if it has no more than two divisors: 1 and the number itself.*/