#include <iostream>

using namespace std;

int main()
{
	int32_t n;
	cin >> n;
	if (n & 1) cout << "ODD" << endl;
	else cout << "EVEN" << endl;

	return 0;
}