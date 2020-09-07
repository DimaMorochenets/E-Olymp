#include <iostream>

int main()
{
	uint64_t a, b;
	
	std::cin >> a >> b;

	std::cout << (a ^ b);

	return 0;
}

/*Two positive integers a and b are given. 
  Apply the bitwise exclusive or operation to them*/