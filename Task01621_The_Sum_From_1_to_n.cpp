#include <iostream>

int main() 
{
	long n;
    std::cin >> n;

    long m = std::abs(n);
    long sum = 0;

    if(m % 2 == 0) sum = m / 2 * (m + 1);
    else sum = (m + 1) / 2 * m;

    if(n > 0) std::cout << sum << std::endl;
    else std::cout << 1 - sum << std::endl;
    
	return 0;
}

/*The sum of all integers from 1 to 100 can be calculated by tricky expedient. 
We divide all the numbers in pairs 1 and 100, 2 and 99, 3 and 98, etc. 
The sum of each pair is 101. The number of all pairs is 100 / 2 = 50. 
Therefore, the sum equals to (1 + 100) * 100 / 2. 
For an odd number of terms works the same formula, 
for example: 1 + 2 + 3 = (1 + 3) * 3 / 2 = 6.*/