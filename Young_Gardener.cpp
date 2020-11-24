#include <iostream>

int main()
{
    int64_t n;
    std::cin >> n;
    std::cout << n * (2 + 2 * n) / 2 + 1 << std::endl;

    return 0;
}

/*Mom asked Vasya to water all the young trees in the garden.
 Vasya knows that while trees are small, they must be very well watered. 
 But how much to water - is unknown. But Vasya is a very clever boy. 
 He carefully read the entire textbook of botany for secondary schools 
 and found that irrigation is directly proportional to the number of leaves on the tree. 
 For a good tree growth enough to pour under the tree every day for one liter of water for each leaf.

Fortunately Wasya found that the leaves on the trees are growing in layers, 
with the upper layer of two leafs, the second - four at the next - six, 
and so on, at each successive layer two leafs more than at previous one. 
And at the very tip of growing another leaf. 
Sly Vasya sent his younger sister Masha to count the number of layers for each tree, 
and asks you to write a program that for each tree compute the number of liters of water for its irrigation.*/