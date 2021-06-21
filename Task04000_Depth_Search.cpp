#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<int16_t>>&, std::vector<int8_t>&, size_t);

int main()
{
    size_t n, start;
    std::cin >> n >> start;
    std::vector<std::vector<int16_t>> adjacency(n, std::vector<int16_t>(n, 0));
    std::vector<int8_t> used(n);
    size_t count = 0;
    for(auto& i:adjacency)
        for(auto& j:i)
            std::cin >> j;
    DFS(adjacency, used, start - 1);
    for(const auto& i:used)
        if(i) count++;
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

/*The undirected unweighted graph with one selected vertex is given. 
Find the number of vertices in the connected component where the selected vertex (including the selected vertex).*/