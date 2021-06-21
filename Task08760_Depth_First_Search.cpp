#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<size_t>>&, std::vector<char>&, size_t);

int main()
{
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<size_t>> adjacency_list(n + 1);
    std::vector<char> used(n + 1, false);
    size_t a, b;
    while(m-- && std::cin >> a >> b){
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
    size_t start;
    std::cin >> start;
    DFS(adjacency_list, used, start);

    return 0;
}
void DFS(const std::vector<std::vector<size_t>>& adjacency_list, std::vector<char>& used, size_t cur_ver)
{
    std::cout << cur_ver << " ";
    used[cur_ver] = true;
    if(adjacency_list[cur_ver].empty()) return;
    for(const auto& next_ver:adjacency_list[cur_ver])
        if(!used[next_ver])
            DFS(adjacency_list, used, next_ver);
}

/*Undirected graph is given. 
Run depth first search from the given vertex v 
and print the numbers of vertices in the order of their first visit.*/