#include <iostream>
#include <vector>

int main()
{
	std::vector<uint16_t> res;

	uint16_t base, cur_test, tests;
	std::cin >> tests;

	while (tests-- && std::cin >> cur_test >> base)
	{
		char cur_num;
		while (isspace(cur_num = getchar()));

		int sum = cur_num - '0';
		while (!isspace(cur_num = getchar())) 
			sum += cur_num - '0';

		res.push_back(sum % (base - 1));
	}

	for (size_t i = 0; i < res.size(); i++)
		std::cout << i + 1 << " " << res[i] << std::endl;

	return 0;
}

/*Casting around for problems leads us to combine modular arithmetic with different integer bases, 
  particularly the problem of computing values modulo b - 1, 
  where b is the base in which the value is represented. For example,

  782910 mod 9 = 8
  377777777777777738 mod 7 = 6
  1234567 mod 6 = 3
  (Note that 377777777777777738 = 112589990684261910 and 1234567 = 2287510)

  Your job is to write a program that reads integer values in various bases 
  and computes the remainder after dividing these values by one less than the input base.

  The first line contains the number of data sets t (1 ≤ t ≤ 1000). 
  Each data set should be processed identically and independently.

  Each data set consists of a single line of input containing three space-separated values. 
  The first is an integer which is the data set number. 
  The second is an integer which is the number b (2 ≤ b ≤ 10), denoting a numeric base. 
  The third is an unsigned number d, in base b representation. 
  For this problem, the number of numeric characters in d will be limited to 10000000.*/