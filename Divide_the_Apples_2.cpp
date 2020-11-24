#include <iostream>

int main() 
{
    int kids, apples;
    std::cin >> kids >> apples;
    std::cout << apples % kids << std::endl;
    
	return 0;
}

/*n schoolchildren divide k apples evenly, the residue remains in the basket. 
How many apples remains in the basket?*/