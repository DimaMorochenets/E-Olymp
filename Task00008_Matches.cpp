#include <iostream>
#include <math.h>

int main()
{
	long long n;
	std::cin >> n;
	long long value = (long long)sqrt(n);
	long long N = value * value;
	long long count = 4 + 6 * (value - 1) + 2 * (long long)pow(value - 1, 2);

	if (N < n)
	{
		for (long long i = 1; i <= value; i++)
		{
			if (i == 1) count += 3;
			else count += 2;
			N++;
			if (N == n) { value = -1; break; }
		}
		for (long long i = 1; i <= value + 1; i++)
		{
			if (i == 1) count += 3;
			else count += 2;
			N++;
			if (N == n) break;
		}
	}

	std::cout << count;

	return 0;
}

/*What is the minimum number of matches necessary to pit on the plane n squares with a side in one match? 
Matches can not be broken and put on each other. 
The vertices of the squares should be the points where the ends of the matches meet, and the sides are matches themselves.

Write a program that by the number of squares n to be constructed, finds the minimum number of matches required for this.*/