#include <iostream>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    std::cout << n[n.size() - 3] << std::endl;

    return 0;
}

/*Given positive integer. Print its third digit from the right*/