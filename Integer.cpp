#include <iostream>

class Integer
{
private: int64_t number;
public:
	Integer() :number(0) {}
	Integer(int64_t n) :number(n) {}
	Integer operator+(int64_t n) { return Integer(number + n); }
	Integer operator+(const Integer &n) { return Integer(number) + n.number; }
	Integer operator-(int64_t n) { return Integer(number - n); }
	Integer operator-(const Integer &n) { return Integer(number) - n.number; }
	Integer operator*(int64_t n) { return Integer(number * n); }
	Integer operator*(const Integer &n) { return Integer(number) * n.number; }
	void Read() { std::cin >> number; }
	void Print() { std::cout << number; }
};

int main()
{
	Integer a(0), b(0), c(0);
	a.Read();
	b.Read();
	c.Read();

	Integer res((a * 7 + b - 2) * (a - c + 5));
	res.Print();

	return 0;
}

/*Create class Integer according to the next class diagram:
  Integer:

  private: x:long long
  public:
  Integer()
  Integer(n:long long)
  operator+(n:long long)
  operator+(n:Integer)
  operator-(n:long long)
  operator-(n:Integer)
  operator*(n:long long)
  operator*(n:Integer)
  Given three integers a, b, c, 
  calculate the value of expression (a * 7 + b - 2) * (a - c + 5)*/