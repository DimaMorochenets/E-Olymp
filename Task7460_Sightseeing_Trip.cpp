#include <iostream>

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    int ans = n / k + m / k;
    if(n % k) ans++;
    if(m % k) ans++;
    std::cout << ans << std::endl;

    return 0;
}

/*The pupils from 10-B class decided in the autumn holiday to go on an excursion to the capital. 
Knowing the number of boys n and girls m, determine how many rooms you need to book in a hotel, 
if each room has k beds and it is forbidden to settle boys and girls together.*/