#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

using std::vector;

typedef vector<vector<size_t>> graph;

void init(graph&, graph&);
//return strongly connected components
size_t Components(const graph&, const graph&, size_t);
//DFS on the oroginal graph
void DFS(const graph&, vector<int8_t>&, vector<size_t>&, size_t);
//DFS on the transpose graph
void DFS_component(const graph&, vector<size_t>&, size_t, size_t);

int main()
{
    uint32_t num;
    std::cin >> num;
    graph N(num, vector<size_t>(0));
    graph Nt(num, vector<size_t>(0));

    init(N, Nt);

    std::cout << Components(N, Nt, num);

    return 0;
}
void init(graph& N, graph& Nt)
{
    uint32_t edges;
    std::cin >> edges;
    size_t x, y;

    while (edges-- && std::cin >> x >> y) {
        N[x - 1].push_back(y - 1);
        Nt[y - 1].push_back(x - 1);
    }
}
size_t Components(const graph& N, const graph& Nt, size_t num)
{
    uint32_t count = 0;
    size_t vertex;
    vector<int8_t> used(num, false);
    vector<size_t> list_ver;
    vector<size_t> component(num, -1);

    for (size_t i = 0; i < num; i++)
        if (!used[i])
            DFS(N, used, list_ver, i);

    
    for (size_t i = 0; i < num; i++) {
        vertex = list_ver[num - 1 - i];
        if (component[vertex] == -1)
            DFS_component(Nt, component, vertex, count++);
    }

    used.assign(count, 1);
    for (size_t i = 0; i < N.size(); i++) {
        for (size_t j = 0; j < N[i].size(); j++) {
            vertex = N[i][j];
            if (component[i] != component[vertex])
                used[component[vertex]] = false;
        }
    }

    count = 0;
    for (const auto& i : used)
        if (i)
            count++;

    return count;
}
void DFS(const graph& N, vector<int8_t>& used, vector<size_t>& list, size_t start)
{
    used[start] = true;
    for (size_t i = 0; i < N[start].size(); i++)
        if (!used[N[start][i]])
            DFS(N, used, list, N[start][i]);
    list.push_back(start);
}
void DFS_component(const graph& N, vector<size_t>& list, size_t start, size_t color)
{
    size_t vertex;
    list[start] = color;
    for (size_t i = 0; i < N[start].size(); i++) {
        vertex = N[start][i];
        if (list[vertex] == -1)
            DFS_component(N, list, vertex, color);
    }
}

/*Dominoes are lots of fun. Children like to stand the tiles 
on their side in long lines. When one domino falls, 
it knocks down the next one, which knocks down the one after that, 
all the way down the line. 
However, sometimes a domino fails to knock the next one down. 
In that case, we have to knock it down by hand 
to get the dominoes falling again.

Your task is to determine, given the layout of some domino tiles, 
the minimum number of dominoes that must be knocked down 
by hand in order for all of the dominoes to fall.

Input
The first line contains two integers, each no larger than 100000. 
The first integer n is the number of domino tiles 
and the second integer m is the number of lines to follow. 
The domino tiles are numbered from 1 to n. 
Each of the following lines contains 
two integers x and y indicating that if domino number x falls, 
it will cause domino number y to fall as well.

Output
Print a line containing one integer, 
the minimum number of dominoes that must be knocked over 
by hand in order for all the dominoes to fall.*/