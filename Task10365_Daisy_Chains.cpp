#include <iostream>
#include <string>
#include <vector>

bool check(const std::vector<uint32_t>&, size_t, size_t);

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<uint32_t> N(n);
    for(auto& i:N) std::cin >> i;

    size_t rez = n;
    for(size_t i = 0; i < n - 1; i++)
        for(size_t j = i + 1; j < n; j++)
            if(check(N, i, j))
                rez++;

    std::cout << rez << std::endl;

    return 0;
}
bool check(const std::vector<uint32_t>& N, size_t L, size_t R)
{
    uint32_t sum = 0;
    for(size_t i = L; i <= R; i++)
        sum += N[i];

    if(sum % (R - L + 1)) return false;

    sum = sum / (uint32_t)(R - L + 1);
    for(size_t i = L; i <= R; i++)
        if(N[i] == sum)
            return true;
    return false;
}

/*Every day, as part of her walk around the farm, Bessie the cow visits her favorite pasture, 
which has n flowers (all colorful daisies) labeled 1..n lined up in a row. Flower i has pi petals.
As a budding photographer, Bessie decides to take several photos of these flowers. 
In particular, for every pair of flowers (i, j) satisfying 1 ≤ i ≤ j ≤ n, 
Bessie takes a photo of all flowers from flower i to flower j (including i and j).
Bessie later looks at these photos and notices that some of these photos have an "average flower" - 
a flower that has p petals, where p is the exact average number of petals among all flowers in the photo.
How many of Bessie's photos have an average flower?
Every picture containing just a single flower contributes to the count (there are four of these in the example)*/