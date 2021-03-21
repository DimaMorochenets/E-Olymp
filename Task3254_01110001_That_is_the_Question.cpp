#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

int main()
{
	std::string binary;
	uint64_t decimal = 0;
	std::cin >> binary;

	std::for_each(binary.begin(), binary.end(), 
		[&decimal](const char value) {
			if (value == '1') decimal = (decimal << 1) + 1;
			else decimal <<= 1;
		});

	std::cout << decimal;

	return 0;
}

/*As you know, 
  the number in binary is written using the digits 0 and 1. 
  You must convert number from binary to decimal*/