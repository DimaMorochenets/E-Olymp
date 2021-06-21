#include <iostream>
#include <vector>
#include <algorithm>

bool DFS(const std::vector<std::vector<int8_t>>&, std::vector<int8_t>&, size_t, size_t, size_t);

int main()
{
    size_t n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int8_t>> adjacency_matrix(n, std::vector<int8_t>(n, 0));
    std::vector<int8_t> used(n, false);
    size_t a, b;
    while(m-- && std::cin >> a >> b){
        if(a == b) continue;
        adjacency_matrix[a - 1][b - 1] = 1;
        adjacency_matrix[b - 1][a - 1] = 1;
    }
    bool is_cycle = false;
    for(size_t i = 0; i < used.size(); i++){
        if(DFS(adjacency_matrix, used, i, i, UINT64_MAX)){
            is_cycle = true;
            break;
        }
        std::fill(used.begin(), used.end(), false);
    }
    if(is_cycle) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}
bool DFS(const std::vector<std::vector<int8_t>>& adjacency_matrix, std::vector<int8_t>& used, size_t cur_ver, size_t start_ver, size_t prev_ver)
{
    used[cur_ver] = true;
    for(size_t i = 0; i < adjacency_matrix.size(); i++){
        if(i != prev_ver && adjacency_matrix[cur_ver][i]){
            if(used[i] && i == start_ver) return true;
            else if(used[i]) return false;
            else return DFS(adjacency_matrix, used, i, start_ver, cur_ver);
        }
    }
    return false;    
}

/*In the city of N in the near future will take place the world championship car racing among the cars of Formula-0. 
As the organisers haven't the time to build a special race track for these competitions, 
it was decided to organise a track in the streets of the city.
In the city of N there are n intersections, some pairs of which are connected by roads, 
the movement which is possible in both directions. 
In this case, any two of the intersection are connected by no more than one way, 
and it is possible to reach by road from any intersection before anyone else.
The route, where every competition will be held must be circular (i.e. should start and finish at the same intersection), 
while in the process of movement along it the crossing should occur no more than once.
At the preliminary stage of preparation of the organising committee was set up a list of all city roads. 
Now it's time to use it. The first question that must be addressed - 
is the question of existence in the desired circular route (of course, if the answer is negative, the organisers will have to urgently build some more roads). 
The only problem is that the organisers have a suspicion that, since the list was compiled not too closely, it has some of the roads listed more than once.
Write a program that, given the list of roads in the city, determine is it possible to organize the desired circular track.*/