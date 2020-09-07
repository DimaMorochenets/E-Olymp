#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

void check(std::vector<uint16_t>&, size_t, uint16_t);
void increment(std::vector<uint16_t>&);
int main()
{
    size_t n;
    uint16_t sum;

    std::cin >> n >> sum;

    std::vector<uint16_t> number(n);
    if(n > 1) number.back() = 1;

    check(number, n > 1 ? (size_t)pow(10, n - 1) * 9 : 10, sum);

    return 0;
}
void check(std::vector<uint16_t>& number, size_t count, uint16_t key)
{
    if (!count) return;

    uint16_t sum = 0;
    for (const uint16_t& i : number)
        sum += i;

    if (sum == key) {
        std::for_each(number.crbegin(), number.crend(),
            [](const uint16_t x) { std::cout << x; });
        std::cout << std::endl;
    }

    increment(number);
    check(number, count - 1, key);
}
void increment(std::vector<uint16_t>& number)
{
    number.front()++;
    for (size_t i = 0; i < number.size() - 1; i++) {
        if (number[i] >= 10) { number[i] -= 10; number[i + 1]++; }
        else break;
    }
}

/*Find all n-digit numbers with sum of digits equals to s*/