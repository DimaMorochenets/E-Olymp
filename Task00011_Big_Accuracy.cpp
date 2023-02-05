#include <iostream>

int main()
{
    int numarator, denominator;
    int numOfDigits;
    std::cin >> numarator >> denominator >> numOfDigits;

    std::cout << numarator / denominator << ".";

    int digit = (numarator % denominator) * 10;
    for (int i = 0; i < numOfDigits; i++) {
        std::cout << digit / denominator; 
        digit = (digit % denominator) * 10;
    } 

    return 0;
}

/*The rational fraction m/n is given. 
Write it in the decimal notation with k digits after the decimal point.*/