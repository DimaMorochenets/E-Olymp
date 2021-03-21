#include <iostream>

int main()
{
	uint64_t k, n;
	std::cin >> k >> n;

	!(k ^ n) ? std::cout << (1 << (k + 1)) : std::cout << ((1 << k) | (1 << n));

	return 0;
}

/*Two different integers k and n are given. 
  Print the value 2^k + 2^n, using bit operations only*/