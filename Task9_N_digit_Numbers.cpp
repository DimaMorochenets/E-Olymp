#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int n;												
	std::cin >> n;

	switch (n)											
	{
	case 1: std::cout << 10 << " " << 0; break;
	case 2: std::cout << 1 << " " << 22; break;
	case 3: std::cout << 6 << " " << 123; break;
	case 4: std::cout << 12 << " " << 1124; break;
	case 5: std::cout << 40 << " " << 11125; break;
	case 6: std::cout << 30 << " " << 111126; break;
	case 7: std::cout << 84 << " " << 1111127; break;
	case 8: std::cout << 224 << " " << 11111128; break;
	case 9: std::cout << 144 << " " << 111111129; break;
	}

	return 0;
}

/*Find the quantity of N-digit numbers, which the sum is equal to their product. 
  Call the least from numbers for given N (N < 10)*/