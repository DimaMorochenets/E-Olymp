#include <iostream>
#include <string>

int main()
{
	std::string number;
	int sum = 0;
	int i = 0;

	std::cin >> number;
	if (number.front() == '-')
		i++;

	for(; i < number.size(); i++)
		sum += (int)(number[i] - '0');

	std::cout << sum << std::endl;

	return 0;
}

/*Find the sum of digits of an integer.
One 32-bit integer n (the number can be negative).*/