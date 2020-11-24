#include <iostream>

using namespace std;

int main()
{
	int32_t a, b;
	cin >> a >> b;
	if (a % b) cout << a / b << " " << a % b << endl;
	else cout << "Divisible" << endl;

	return 0;
}

/*Given positive integers a and b. Check if a is divisible by b.
If a is not divisible by b, print in one line the quotient and the remainder of dividing a by b. 
Otherwise print "Divisible".*/