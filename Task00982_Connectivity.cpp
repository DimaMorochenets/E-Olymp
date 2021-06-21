#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<size_t>>&, std::vector<int8_t>&, size_t);
bool check(const std::vector<int8_t>&);

int main()
{
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<size_t>> adjacency_list(n);
    std::vector<int8_t> used(n, false);
    size_t a, b;
    while(m-- && std::cin >> a >> b){
        adjacency_list[a - 1].push_back(b - 1);
        adjacency_list[b - 1].push_back(a - 1);
    }
    DFS(adjacency_list, used, 0);
    if(check(used)) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}
void DFS(const std::vector<std::vector<size_t>>& adjacency_list, std::vector<int8_t>& used, size_t cur_ver)
{
    used[cur_ver] = true;
    if(adjacency_list[cur_ver].empty()) return;
    for(const auto& next_ver:adjacency_list[cur_ver])
        if(!used[next_ver])
            DFS(adjacency_list, used, next_ver);
}
bool check(const std::vector<int8_t>& used)
{
    for(const auto& i:used)
        if(!i) return false;
    return true;
}

/*Check whether the given undirected graph is connected. 
That its possible to go from any vertex to any other along the edges of this graph.*/