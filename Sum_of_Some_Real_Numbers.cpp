#include <iostream>

template<typename T>
class numbers
{
    private:
        T* values;
        size_t size;
    public:
        numbers(size_t n) { size = n; values = new T[size]; }
        friend std::istream& operator>>(std::istream& stream, numbers& obj){
            for(size_t i = 0; i < obj.size; i++)
                stream >> obj.values[i];
            return stream;
        }
        void sum_of(size_t n){
            std::cout << std::fixed;
            std::cout.precision(4);
            T sum = 0;
            for(size_t i = 0; i < n; i++)
                sum += values[i];
            std::cout << sum << std::endl;
        }
        ~numbers() { delete[] values; }
};

int main() 
{
	numbers<double> N(4);
    std::cin >> N;

    N.sum_of(2);
    N.sum_of(3);
    N.sum_of(4);

	return 0;
}

/*Four real numbers are given. Find the sum of first two, 
of first three and of all four numbers.
All sums must be printed with 4 decimal digits.*/