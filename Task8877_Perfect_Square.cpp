#include <iostream>
#include <math.h>

int main() 
{
	int x;
    std::cin >> x;

    int y = sqrt(x);

    y * y == x ? std::cout << y:std::cout << "No";
    
	return 0;
}

/*Positive integer n is given. If n is a perfect square of some positive integer m, then print m. 
Otherwise print No.*/