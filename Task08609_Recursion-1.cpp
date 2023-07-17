#include <iostream>
#include <string>

uint64_t function(uint64_t n);

int main()
{
	uint64_t n;
	std::cin >> n;

	std::cout << function(n) << std::endl;

	return 0;
}

uint64_t function(uint64_t n)
{
	return n == 0 ? 0 : n + function(n - 1);
}

/*Implement the recursive function:

       | 0, n = 0
f(n) = |
       | f(n - 1) + n, n > 0

One integer n (0 ≤ n ≤ 1000).*/