#include <iostream>
#include <string>
#include <algorithm>

std::string add(std::string&, std::string&);

int main()
{
    std::string n, m;
    std::cin >> n;
    std::cin >> m;
    n.size() > m.size() ? std::cout << add(n, m) : std::cout << add(m, n);

    return 0;
}
std::string add(std::string& a, std::string& b)
{
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    for(size_t i = 0; i < b.size(); i++)
        a[i] += b[i] - '0';
    for(size_t i = 0; i < a.size() - 1; i++)
        if(a[i] - '0' > 9){
            a[i] -= 10;
            a[i + 1]++;
        }
    if(a.back() - '0' > 9){
        a.back() -= 10;
        a.push_back('1');
    }
    std::reverse(a.begin(), a.end());
    return a;
}

/*Given two non-negative integers m and n. Find their sum.*/