#include <iostream>
#include <math.h>

int main()
{
    double radius, width, length;
    std::cin >> radius >> width >> length;
    if(std::sqrt(width * width + length * length) / 2 <= radius)
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}

/*After the second round of programming contests Olympiad participants decided to celebrate this event. 
For this purpose a large rectangular cake was ordered. 
The participants gathered at the round table. Naturally, they have a question: 
is it possible to put a rectangular cake on the round table so that no piece of cake will extend beyond the table. 
You need to answer this question knowing the size of the cake and the radius of the table*/