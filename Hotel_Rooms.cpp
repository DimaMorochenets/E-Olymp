#include <iostream>

int main()
{
    int64_t n, m;
    std::cin >> n >> m;
    std::cout << (n - 1) * (m * 3) << std::endl;

    return 0;
}

/*A hotel has n floors. The lobby, restaurant and gym are located on the first floor. 
The guestrooms are on 2-nd to n-th floors. There are m standard rooms on each floor. 
If each standard room can fit 3 guests, 
what is the maximum number of guests that all the standard rooms can accommodate?*/