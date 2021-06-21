#include <iostream>
#include <vector>
#include <algorithm>

void DFS(const std::vector<std::vector<int16_t>>&, std::vector<int16_t>&, size_t, bool&);

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<std::vector<int16_t>> adjacency_matrix(n, std::vector<int16_t>(n, 0));
    std::vector<int16_t> used(n, 0);
    for(auto& i:adjacency_matrix)
        for(auto& j:i)
            std::cin >> j;
    
    bool is_cycle = false;
    for(size_t i = 0; i < used.size(); i++){
        DFS(adjacency_matrix, used, i, is_cycle);
        if(is_cycle == true) break;
        std::fill(used.begin(), used.end(), 0);
    }
    if(is_cycle) std::cout << 1 << std::endl;
    else std::cout << 0 << std::endl;

    return 0;
}
void DFS(const std::vector<std::vector<int16_t>>& adjacency_matrix, std::vector<int16_t>& used, size_t cur_ver, bool& is_cycle)
{
    used[cur_ver] = 1;
    for(size_t i = 0; i < adjacency_matrix.size(); i++){
        if(adjacency_matrix[cur_ver][i]){
            if(used[i] == 0) DFS(adjacency_matrix, used, i, is_cycle);
            else if(used[i] == 1) is_cycle = true; 
        }
    }
    used[cur_ver] = 2;
}

/*Oriented graph is given. Determine, does it contain a cycle.*/