#include <iostream>
#include <string>

class Vector{
    private:
        int x;
        int y;
        int z;
    public:
        Vector() : x(0), y(0), z(0) {}
        Vector(int x, int y, int z) : x(x), y(y), z(z) {}
        Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}
        void setX(int x) { Vector::x = x; }
        void setY(int y) { Vector::y = y; }
        void setZ(int z) { Vector::z = z; }
        int getX() { return Vector::x; }
        int getY() { return Vector::y; }
        int getZ() { return Vector::z; }
        double length() { return std::sqrt(Vector::x * Vector::x + Vector::y * Vector::y + Vector::z * Vector::z); }
        std::string toString() { return std::string(std::to_string(Vector::x) + " " + std::to_string(Vector::y) + " " + std::to_string(Vector::z)); }
        void Out() { std::cout << Vector::x << " " << Vector::y << " " << Vector::z << std::endl; }
};

int main()
{
    Vector a(2, 3, 4);
    std::cout << a.length() << " " << (std::string)a.toString() << std::endl;

    return 0;
}

/*Create the class Vector with three members x, y, z - private integers.

Implement in the class three constructors:
default constructor that sets to 0 the class members.
constructor with parameters, the parameters are the vector coordinates
copy constructor.

Implement the methods:
double length() - return the length of the vector;
void setX(int), void setY(int), void setZ(int) - methods that change the corresponding values of the vector;
int getX(), int getY() int getZ() - methods that return the corresponding coordinates of the vector.
void Out() - print the coordinates of the vector, separated by a space, then print a new line symbol.
Submit the class only.*/