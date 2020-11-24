#include <iostream>

int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    int blue = 0, red = 0, yellow = 0;
    blue = a + b - n;
    red = b - blue;
    yellow = a - blue;

    std::cout << blue << " " << red << " " << yellow << std::endl;

    return 0;
}

/*For the holiday, Professor bought blue, red, and yellow balloons. 
In total he bought n balloons. There are a yellow and blue balloons together. 
There are b red and blue balloons together.
How many blue, red and yellow balloons did the Professor buy?*/