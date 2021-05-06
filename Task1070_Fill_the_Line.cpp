#include <iostream>
#include <vector>

//add new segment to line
void fill_line(std::vector<std::pair<int64_t, int64_t>>&, std::pair<int64_t, int64_t>&&);
//delete equal segments
bool update_line(std::vector<std::pair<int64_t, int64_t>>&, std::vector<std::pair<int64_t, int64_t>>::iterator cur_segment);

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

    size_t length = 0;
    for(const auto& segment:line)
        length += std::abs(segment.second - segment.first);

    std::cout << length << std::endl;

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
    if(cur_segment == line.end()) return false;
    for(auto segment = line.begin(); segment != line.end(); segment++){
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

/*n segments are painted on the line. 
The coordinates of the left and right ends of each segment li and ri are known.
Find the length of the colored part of the line.*/