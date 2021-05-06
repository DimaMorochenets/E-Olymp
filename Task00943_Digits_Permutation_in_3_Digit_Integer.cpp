#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string n;
    std::cin >> n;
    if(n[2] != '0') std::swap(n[0], n[2]);
    else if(n[1] != 0){
        n.pop_back();
        std::swap(n[0], n[1]);
    }
    else{
        n.pop_back();
        n.pop_back();
    }
    std::cout << n << std::endl;

    return 0;
}

/*In the given three-digit positive integer swap the first and the last digits.*/