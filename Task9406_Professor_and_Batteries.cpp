#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << c / (a - b) << std::endl;

    return 0;
}

/*There are some packs of batteries on the Professor's table. 
There are a batteries in each pack. 
When the Professor took b batteries from each pack, only c batteries remained on the table.
How many packs of batteries were on the table?*/