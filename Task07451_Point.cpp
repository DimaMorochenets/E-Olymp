#include <iostream>

class Point{
    private:
        int x;
        int y;
    public:
        Point(int x = 0, int y = 0): x(x), y(y){}
        void Read(void){ std::cin >> x >> y; }
        void Print(void) { std::cout << x << " " << y; }
        Point operator+(int v) { return Point(x + v, y + v); }
        Point operator+(Point &p) { return Point(x + p.x, y + p.y); }
        int getX(void) { return x; }
        int getY(void) { return y; }
        void setX(int x) { Point::x = x; }
        void setY(int y) { Point::y = y; }
};

int main()
{
    Point a, b;
    int value;
    a.Read(); b.Read();
    std::cin >> value;
    Point res = a + b + value;
    res.Print();

    return 0;
}
/*The point is given with its x and y coordinates: (x, y).
Two points (a, b), (c, d) and an integer n are given. Add them.
Adding two points means to add the corresponding coordinates: (1, 2) + (3, 4) = (4, 6).
Adding point and a number means to add a number to both point coordinates: (1, 2) + 10 = (11, 12)

Write the code according to the next interface:

class Point // C++
{
private:
  int x, y;
public:
  Point(int x = 0, int y = 0); // Constructor
  void Read(void); // Read vector coordinates
  void Print(void); // Print vector coordinates
  Point operator +(int v); // Overload operator +: return the sum of point and integer v
  Point operator +(Point &p); // Overload operator +: return the sum of two points
  int getX(void); // Return x coordinate
  int getY(void); // Return y coordinate
  void SetX(int x); // Set x coordinate
  void SetY(int y); // Set y coordinate
};*/