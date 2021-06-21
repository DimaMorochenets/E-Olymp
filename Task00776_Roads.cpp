#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int8_t>> CreatAdjacencyMatrix();
void DFS(const std::vector<std::vector<int8_t>>&, std::vector<int8_t>&, size_t);
bool check(const std::vector<int8_t>&);

int main()
{
    size_t count = 0;
    std::vector<std::vector<int8_t>> adjacency = CreatAdjacencyMatrix();
    std::vector<int8_t> used(adjacency.size(), false);
    DFS(adjacency, used, 0);
    while(!check(used)){
        for(size_t i = 0; i < used.size(); i++)
            if(!used[i]){
                for(size_t j = 0; j < adjacency[i].size(); j++){
                    if(i == j) continue;
                    if(!adjacency[i][j]){
                        adjacency[i][j] = adjacency[j][i] = 1;
                        count++;
                        break;
                    }
                }
                break;
            }
        DFS(adjacency, used, 0);
    }
    std::cout << count << std::endl;

    return 0;
}
std::vector<std::vector<int8_t>> CreatAdjacencyMatrix(){
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int8_t>> adjacency(n, std::vector<int8_t>(n, false));
    size_t a, b;
    while(m-- && std::cin >> a >> b){
        if(a == b) continue;
        adjacency[a - 1][b - 1] = adjacency[b - 1][a - 1] = 1;
    }

    return adjacency;
}
void DFS(const std::vector<std::vector<int8_t>>& adjacency, std::vector<int8_t>& used, size_t cur_ver)
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

/*In Ukraine, as you know, a lot of problems. One of them - the road. 
The newly elected president of Ukraine decided to do road construction. 
His goal - to build some additional amount of roads between cities so that you can drive from any city of Ukraine 
in any (possibly through other cities, not necessarily directly). 
Naturally, any additional roads should be built as possible.
We assume that all the roads in Ukraine bilateral (and already available, and those that will be built), 
that is, it may move in both directions. Note that between the two cities may be somewhat expensive. 
In addition, there may be roads connecting the city to itself.*/