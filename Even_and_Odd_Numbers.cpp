#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int ans = 0;
    if(a & 1 || b & 1 || c & 1) ans++;
    if(!(a & 1) || !(b & 1) || !(c & 1)) ans++;
    ans == 2 ? std::cout << "YES" << std::endl:std::cout << "NO" << std::endl;

    return 0;
}

/*Given three integers a, b, c. 
Determine is there among them exist at least one even and at least one odd number*/