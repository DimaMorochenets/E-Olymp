#include <iostream>
#include <math.h>

int main()
{
	int n;
	std::cin >> n;
	double sum = 0;
	do {
		sum += 1.0 / n;
	} while (sum <= 0.5 && n-- > 0);
	
	std::cout << n;

	return 0;
}

/*The Gardener planted N trees during the day. 
And he had to pour out one pail of water under each seedling. 
It was raining that day, so the Gardener began to water the trees not from the day of planting, 
but from some K-th day.

How many days the Gardener didn’t water the trees, 
if he poured 1/N part of water of a pail under every tree in last day, the day before it - 1/(N-1) part, etc. 
and in whole he poured under every tree no more than a half of pail of water?*/