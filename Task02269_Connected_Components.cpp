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

/*The undirected unweighted graph is given. Find the number of its connected components.*/