#include <iostream>
#include <vector>

using matrix = std::vector<std::vector<int16_t>>;

void DFS(const matrix&, std::vector<int8_t>&, size_t);
bool check(const std::vector<int8_t>&);

int main()
{
    size_t n;
    size_t edges = 0;
    std::cin >> n;
    matrix adjacency(n, std::vector<int16_t>(n, 0));
    for(auto& i:adjacency)
        for(auto& j:i){
            std::cin >> j;
            edges += j;
        }
    std::vector<int8_t> used(n, false);
    DFS(adjacency, used, 0);
    if(edges / 2 == n - 1 && check(used)) std::cout<< "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}
void DFS(const matrix& adjacency, std::vector<int8_t>& used, size_t cur_ver)
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

/*Undirected graph without loops and multiple edges is given with the adjacency matrix. 
Determine whether the graph is a tree.*/