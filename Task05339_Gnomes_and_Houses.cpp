#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<int16_t>>&, std::vector<int8_t>&, size_t);
bool check(const std::vector<int8_t>&);

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<std::vector<int16_t>> adjacency(n, std::vector<int16_t>(n, 0));
    std::vector<int8_t> used(n);
    size_t count = 0;
    for(auto& i:adjacency)
        for(auto& j:i)
            std::cin >> j;
    while(!check(used)){
        for(size_t i = 0; i < used.size(); i++)
            if(!used[i]) {
                DFS(adjacency, used, i);
                count++;
            }
    }
    std::cout << count << std::endl;

    return 0;
}
void DFS(const std::vector<std::vector<int16_t>>& adjacency, std::vector<int8_t>& used, size_t cur_ver)
{
    used[cur_ver] = true;
    for(size_t i = 0; i < adjacency.size(); i++)
        if(!used[i] && adjacency[cur_ver][i])
            DFS(adjacency, used, i);
}
bool check(const std::vector<int8_t>& used)
{
    for(const auto& i:used)
        if(!i) return false;
    return true;
}

/*Long time ago, in Berendeevy Polyany lived not schoolchildren and teachers, but gnomes. 
Since then, some of the houses are connected by underground tunnels. On this night, 
the gnomes planned to regain their ancient lands and capture all the LKSH houses while schoolchildren and teachers are asleep.
Once in the house, the dwarfs can freely penetrate into any other connected with it tunnels, 
from it - into connected with it and so on. However, the teachers, having learned about this, closed the doors for the night. 
And now the dwarfs have to break some number of doors in order to grab the LKSH.
Imagine yourself at the dwarf's place and answer the question: how many doors they have to break?*/