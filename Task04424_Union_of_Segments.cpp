#include <iostream>
#include <vector>
#include <algorithm>

//add new segment to line
void fill_line(std::vector<std::pair<int64_t, int64_t>>&, std::pair<int64_t, int64_t>&&);
//delete equal segments
bool update_line(std::vector<std::pair<int64_t, int64_t>>&, std::vector<std::pair<int64_t, int64_t>>::iterator);

int main()
{
    size_t n;
    std::cin >> n;
    int64_t left, rigth;
    std::vector<std::pair<int64_t, int64_t>> line;

    n--;
    std::cin >> left >> rigth;
    line.push_back({left, rigth});

    while(n-- && std::cin >> left >> rigth)
        fill_line(line, {left, rigth});
    
    for(auto cur_segment = line.begin(); cur_segment != line.end(); cur_segment++)
        if(update_line(line, cur_segment))
            cur_segment--;
    
    std::sort(line.begin(), line.end(), [](std::pair<int64_t, int64_t>& a, std::pair<int64_t, int64_t>& b) { return a.first < b.first; });

    std::cout << line.size() << std::endl;
    for(const auto& i:line)
        std::cout << i.first << " " << i.second << std::endl;

    getchar();
    getchar();
    return 0;
}
void fill_line(std::vector<std::pair<int64_t, int64_t>>& line, std::pair<int64_t, int64_t>&& new_segment)
{
    for(auto& segment:line){
        if(segment.first <= new_segment.first && segment.second >= new_segment.second)
            return;
        if(segment.first > new_segment.first && segment.second >= new_segment.second && segment.first <= new_segment.second){
            segment.first = new_segment.first;
            return;
        }
        if(segment.first <= new_segment.first && segment.second < new_segment.second && segment.second >= new_segment.first){
            segment.second = new_segment.second;
            return;
        }
        if(segment.first > new_segment.first && segment.second < new_segment.second){
            segment.first = new_segment.first;
            segment.second = new_segment.second;
            return;
        }
    }
    line.push_back(new_segment);
}
bool update_line(std::vector<std::pair<int64_t, int64_t>>& line, std::vector<std::pair<int64_t, int64_t>>::iterator cur_segment)
{
    for(auto segment = cur_segment; segment != line.end(); segment++){
        if(cur_segment == segment) continue;
        if(cur_segment->first <= segment->first && cur_segment->second >= segment->second){
            line.erase(segment);
            return true;
        }
        if(cur_segment->first > segment->first && cur_segment->second >= segment->second && cur_segment->first <= segment->second){
            cur_segment->first = segment->first;
            line.erase(segment);
            return true;
        }
        if(cur_segment->first <= segment->first && cur_segment->second < segment->second && cur_segment->second >= segment->first){
            cur_segment->second = segment->second;
            line.erase(segment);
            return true;
        }
        if(cur_segment->first > segment->first && cur_segment->second < segment->second){
            cur_segment->first = segment->first;
            cur_segment->second = segment->second;
            line.erase(segment);
            return true;
        }
    }
    return false;
}

/*Solving the problem from the quiz in mathematics, 
Vasya received the answer in the form of union of n segments [li, ri] on the number line. 
However, some of these segments may intersect with each other, that Vasya does not like too much.

Your task is to present Vasya's answer as a union of the minimum number of segments.*/