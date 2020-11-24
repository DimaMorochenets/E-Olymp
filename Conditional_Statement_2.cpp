#include <iostream>

using namespace std;

int main()
{
	int64_t x;
	cin >> x;
	if (x < 10) cout << x * x - 2 * x + 4 << endl;
	else cout << x * x * x + 5 * x << endl;

	return 0;
}

/*Find the value of y according to condition:
    x^3 + 5x,     x >= 10
y = 
    x^2 - 2x + 4, x < 10
*/