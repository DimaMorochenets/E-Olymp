#include <iostream>

using namespace std;

int main()
{
	int32_t x;
	cin >> x;
	if (x < -4) cout << x + 5 << endl;
	else if (x > 7) cout << x * x * x + 2 * x << endl;
	else cout << x * x - 3 * x << endl;

	return 0;
}

/*Find the value of y according to condition:
    x + 5,    x < -4
y = x^2 - 3x, -4 <= x <= 7
    x^3 + 2x, x > 7
*/