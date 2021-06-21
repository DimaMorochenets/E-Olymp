#include <iostream>
#include <vector>

bool delete_edge(const std::vector<std::pair<size_t, size_t>>&, size_t, size_t);
void DFS(const std::vector<std::vector<size_t>>&, std::vector<char>&, size_t);
bool check(const std::vector<char>&);

int main()
{
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::pair<size_t, size_t>> edge_list(m);
    size_t a, b;
    for(size_t i = 0; i < edge_list.size(); i++){
        std::cin >> a >> b;
        edge_list[i] = {a, b};
    }

    while(edge_list.size() >= n){
        size_t deleted_edge = 0;
        for(size_t i = 0; i < edge_list.size(); i++){
            if(delete_edge(edge_list, i, n)){
                edge_list.erase(edge_list.begin() + i);
                break;
            }
        }
    }
    for(const auto& i:edge_list)
        std::cout << i.first << " " << i.second << std::endl;

    return 0;
}
bool delete_edge(const std::vector<std::pair<size_t, size_t>>& edge_list, size_t skiped_edge, size_t n)
{
    std::vector<std::vector<size_t>> adjacency_list(n + 1);
    std::vector<char> used(n + 1, false);
    for(size_t i = 0; i < edge_list.size(); i++){
        if(i == skiped_edge) continue;
        adjacency_list[edge_list[i].first].push_back(edge_list[i].second);
        adjacency_list[edge_list[i].second].push_back(edge_list[i].first);
    }
    DFS(adjacency_list, used, 1);
    return check(used);
}
void DFS(const std::vector<std::vector<size_t>>& adjacency_list, std::vector<char>& used, size_t cur_ver)
{
    used[cur_ver] = true;
    if(adjacency_list[cur_ver].empty()) return;
    for(const auto& next_ver:adjacency_list[cur_ver])
        if(!used[next_ver])
            DFS(adjacency_list, used, next_ver);
}
bool check(const std::vector<char>& used)
{
    for(size_t i = 1; i < used.size(); i++)
        if(!used[i])
            return false;
    return true;
}

/*The connected undirected graph without loops and multiple edges is given. 
You are allowed to remove the edges from it. Obtain a tree from the graph.*/