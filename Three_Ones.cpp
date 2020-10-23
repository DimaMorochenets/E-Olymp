#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

int main() 
{
	uint64_t n;
	std::cin >> n;

	uint64_t value1 = 2;
    uint64_t value2 = 4;
    uint64_t value3 = 7;

    if(n == 1) std::cout << value1 << std::endl;
    else if(n == 2) std::cout << value2 << std::endl;
    else if(n == 3) std::cout << value3 << std::endl;
    else {
        for(uint64_t i = 0; i < n - 3; i++){
            uint64_t temp = (value1 + value2 + value3) % 12345;
            value1 = value2;
            value2 = value3;
            value3 = temp;
        }
        std::cout << value3 << std::endl;
    }

	return 0;
}

/*Find the number of sequences of length n, 
consisting only of zeros and ones, 
that do not have three one's in a row.*/