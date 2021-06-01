#include <iostream>
#include <math.h>

struct circle{
    double x, y;
    double r;
    friend std::istream& operator >>(std::istream& stream, circle& obj){
        stream >> obj.x >> obj.y >> obj.r;
        return stream;
    }
};

int comm_points(const circle&, const circle&);

int main()
{
    circle c1;
    circle c2;
    std::cin >> c1 >> c2;

    std::cout << comm_points(c1, c2) << std::endl;

    return 0;
}
int comm_points(const circle& c1, const circle& c2)
{   
    double distance = std::sqrt(std::pow(c1.x - c2.x, 2) + std::pow(c1.y - c2.y, 2));
    if(!distance) return (c1.r == c2.r && c1.r) ? -1:0;
    if(distance == c1.r + c2.r) return 1;
    if(distance > c1.r + c2.r) return 0;
    double small_c = (c1.r < c2.r) ? c1.r:c2.r;
    double large_c = (c1.r > c2.r) ? c1.r:c2.r;
    if(distance < large_c){
        if(distance + small_c == large_c) return 1;
        if(distance + small_c < large_c) return 0;
        return 2;
    }
    else{
        if(distance - small_c == large_c) return 1;
        if(distance - small_c > large_c) return 0;
        return 2;
    }
    return 0;
}