#include <iostream>

using namespace std;

int main()
{
	uint32_t a, b, c;
	cin >> a >> b >> c;
	if (a % b || a % c) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0;
}

/*Given positive integer n. Is is divisible simultaneously by a and by b?*/