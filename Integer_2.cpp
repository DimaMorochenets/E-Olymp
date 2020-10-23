#include <iostream>
#include <math.h>

int main() 
{
	double x;
    std::cin >> x;

    int y = (int)x;

    x == (double)y ? std::cout << "Ok":std::cout << "No";
    
	return 0;
}

/*One real number n is given.
Print Ok, if n is integer and No otherwise.*/