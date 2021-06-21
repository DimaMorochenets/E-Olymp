#include <iostream>
#include <vector>
#include <algorithm>

struct timestamp
{
    size_t vertex;
    size_t in;
    size_t out;
};

void DFS(const std::vector<std::vector<int8_t>>&, std::vector<int8_t>&, std::vector<timestamp>&, size_t, size_t&);
bool check(const std::vector<int8_t>&);

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<std::vector<int8_t>> adjacency_matrix(n, std::vector<int8_t>(n, 0));
    std::vector<timestamp> timestamps(n);
    size_t time_in = 0;
    std::vector<int8_t> used(n, false);
    size_t a, b;
    while(std::cin >> a >> b){
        if(a == b) continue;
        adjacency_matrix[a - 1][b - 1] = adjacency_matrix[b - 1][a - 1] = 1;
    }
    while(!check(used))
        for(size_t i = 0; i < used.size(); i++)
            if(!used[i])
                DFS(adjacency_matrix, used, timestamps, i, time_in);
    std::sort(timestamps.begin(), timestamps.end(), [](timestamp& a, timestamp& b) { return a.in < b.in; });
    for(size_t i = 0; i < timestamps.size(); i++)
        std::cout << "Vertex: " << timestamps[i].vertex << ", Gray " << timestamps[i].in << ", Black " << timestamps[i].out << std::endl;

    return 0;
}
void DFS(const std::vector<std::vector<int8_t>>& adjacency_matrix, std::vector<int8_t>& used, std::vector<timestamp>& timestamps, size_t cur_ver, size_t& time_in)
{
    used[cur_ver] = true;
    timestamps[cur_ver].vertex = cur_ver + 1;
    timestamps[cur_ver].in = ++time_in;
    for(size_t i = 0; i < adjacency_matrix.size(); i++)
        if(!used[i] && adjacency_matrix[cur_ver][i])
            DFS(adjacency_matrix, used, timestamps, i, time_in);
    timestamps[cur_ver].out = ++time_in;
}
bool check(const std::vector<int8_t>& used)
{
    for(const auto& i:used)
        if(!i) return false;
    return true;
}

/*Undirected disconnected graph is given. Run depth first search on it. 
For each vertex print the timestamps when it becomes gray / black in the order of their first visit.*/