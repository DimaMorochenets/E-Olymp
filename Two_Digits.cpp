#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

int main() 
{
	int n;
	std::cin >> n;

	int value1 = 2; //1-digit numbers
    int value2 = 2; //n-digit numbers

    for(int i = 1; i < n; i++){
        value2 += value1; //i-digit numbers
        value1 = value2 - value1;
    }

    std::cout << value2 << std::endl;

	return 0;
}

/*
How many n-digit numbers can be created using only digits 5 and 9, 
where no three identical digits stand side by side?
*/