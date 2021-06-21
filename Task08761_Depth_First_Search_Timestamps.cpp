#include <iostream>
#include <vector>

void DFS(const std::vector<std::vector<size_t>>&, std::vector<char>&, std::vector<std::pair<size_t, size_t>>&, size_t, size_t&);

int main()
{
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<size_t>> adjacency_list(n + 1);
    std::vector<std::pair<size_t, size_t>> timestamps(n + 1);
    size_t time_in = 0;
    std::vector<char> used(n + 1, false);
    size_t a, b;
    while(m-- && std::cin >> a >> b){
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
    size_t start;
    std::cin >> start;
    DFS(adjacency_list, used, timestamps, start, time_in);
    for(size_t i = 1; i < timestamps.size(); i++)
        std::cout << timestamps[i].first << " " << timestamps[i].second << std::endl;

    return 0;
}
void DFS(const std::vector<std::vector<size_t>>& adjacency_list, std::vector<char>& used, std::vector<std::pair<size_t, size_t>>& timestamps, size_t cur_ver, size_t& time_in)
{
    used[cur_ver] = true;
    timestamps[cur_ver].first = ++time_in;
    if(adjacency_list[cur_ver].empty()) return;
    for(const auto& next_ver:adjacency_list[cur_ver])
        if(!used[next_ver])
            DFS(adjacency_list, used, timestamps, next_ver, time_in);
    timestamps[cur_ver].second = ++time_in;
}

/*Undirected graph is given. Run depth first search from the given vertex v. 
Print the timestamps d[v] and f[v] for each vertex v in the increasing order of vertices.*/