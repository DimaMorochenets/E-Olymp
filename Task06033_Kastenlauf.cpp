#include <iostream>
#include <vector>
#include <math.h>

std::vector<std::pair<int, int>> ReadVer();
std::vector<std::vector<int8_t>> CreatAdjacencyMatrix(const std::vector<std::pair<int, int>>&);
void DFS(const std::vector<std::vector<int8_t>>&, std::vector<int8_t>&, size_t);

int main()
{
    size_t test;
    std::cin >> test;
    while(test--){
        std::vector<std::vector<int8_t>> adjacency = CreatAdjacencyMatrix(ReadVer());
        std::vector<int8_t> used(adjacency.size(), false);
        DFS(adjacency, used, 0);
        if(used.front() && used.back()) std::cout << "happy" << std::endl;
        else std::cout << "sad" << std::endl;
    }

    return 0;
}
std::vector<std::pair<int, int>> ReadVer(){
    size_t n;
    std::cin >> n;
    std::vector<std::pair<int, int>> vertexs(n + 2);
    for(auto& i:vertexs) std::cin >> i.first >> i.second;
    return vertexs;
}
std::vector<std::vector<int8_t>> CreatAdjacencyMatrix(const std::vector<std::pair<int, int>>& vertexs){
    std::vector<std::vector<int8_t>> adjacency(vertexs.size(), std::vector<int8_t>(vertexs.size(), false));
    for(size_t i = 0; i < adjacency.size(); i++){
        for(size_t j = 0; j < adjacency.size(); j++){
            if(i == j) continue;
            if(std::abs(vertexs[i].first - vertexs[j].first) + std::abs(vertexs[i].second - vertexs[j].second) <= 1000)
                adjacency[i][j] = adjacency[j][i] = 1;
        }
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

/*Once every year, Jo and his friends want to visit the local fair in Erlangen, called Bergkirchweih. 
This year, they want to make a Kastenlauf (box run). 
They start at Jo’s home, and have one box (Kasten) of beer (with twenty bottles). 
As they are very thirsty, they drink one bottle of beer every 50 metres.
As the way from Jo's home to the Bergkirchweih is pretty long, they need more beer than they have initially. 
Fortunately, there are stores selling beer on the way. 
When they visit a store, they can drop their empty bottles and buy new bottles, 
but their total number of full bottles will not be more than twenty (because they are too lazy to carry more than one full box).
You are given the coordinates of the stores, of Jo's home and of the location of the Bergkirchweih. 
Write a program to determine whether Jo and his friends can happily reach the Bergkirchweih, or whether they will run out of beer on the way.*/