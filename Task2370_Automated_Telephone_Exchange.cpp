#include <iostream>

int main()
{
	size_t index;
	std::cin >> index;

	uint32_t count = 0;

	for (size_t i = 1; i < 100; i++)
		for (size_t j = 1; j < 100; j++)
			if (!(index - i - j)) count++;

	std::cout << count << std::endl;

	return 0;
}

/*In St Petersburg phone numbers are formatted as "XXX-XX-XX", 
  where the first three digits represent index of the Automated Telephone Exchange (ATE). 
  Each ATE has exactly 10000 unique phone numbers.
  Peter has just bought a new flat and now he wants to install a telephone line. 
  He thinks that a phone number is lucky if the arithmetic expression represented by that phone number is equal to zero. 
  For example, the phone number 102-40-62 is lucky (**102 - 40 - 62 = 0**), 
  and the number 157-10-47 is not lucky (157 - 10 - 47 = 100 ≠ 0).
  Peter knows the index of the ATE that serves his house. 
  To get an idea of his chances to get a lucky number he wants to know how many lucky numbers his ATE has.*/