#include <iostream>

int main()
{
    uint64_t a, b, n;
    std::cin >> a >> b >> n;
    uint64_t count = 0;
    uint64_t pos_a = a, pos_b = b;
    while(pos_a != n || pos_b != n){
        if(pos_a != n) {
            pos_a = pos_b;
            count++;
        }
        if(pos_b != n){
            pos_b += b - a;
            count++;
        }
        if(pos_a > n) pos_a = n;
        if(pos_b > n) pos_b = n;
    }
    std::cout << count << std::endl;
    
    return 0;
}

/*Amelia is studying modeling. She is interested in models with moving parts.
As her first task, she made a rectangular box of size 2 × n, 
which contains two parallel rails and a rectangular bar on each of them. 
The short bar has size 1 × a, and the long one has size 1 × b. 
The long bar has a stopper at each end, and the short one is always between these two stoppers.
The bars can be moved along the rails, one bar at a time, as long as the short bar is between the stoppers. 
So, on each move Amelia selects one of the bars and moves it, while the other one stays in place.

Initially, both bars are aligned to one side of the box, 
and Amelia wants them to be aligned to the other side in as few moves as possible.
What is the minimal number of moves she should do to achieve her goal?*/