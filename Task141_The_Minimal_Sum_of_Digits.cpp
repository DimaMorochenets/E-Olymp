#include <iostream>
#include <vector>
#include <algorithm>

uint8_t Sum_Dig(uint32_t);

int main()
{
    uint32_t m, n;
    std::cin >> m >> n;
    if(m > n) std::swap(m, n);
    size_t len = n - m + 1;
    std::vector<uint8_t> sum_dig(len);
    for(size_t i = 0; i < len && m <= n; i++, m++)
        sum_dig[i] = Sum_Dig(m);
    uint8_t min = *std::min_element(sum_dig.begin(), sum_dig.end());
    uint32_t count = 0;
    for(const auto& i:sum_dig)
        if(min == i) count++;
    
    std::cout << count << std::endl;

    return 0;
}
uint8_t Sum_Dig(uint32_t value)
{
    return value < 10 ? value : (value % 10) + Sum_Dig(value / 10);
}

/*How many positive integers from interval [m, n] have the least sum of digits*/