#include <iostream>

using namespace std;

int main()
{
	uint16_t n, m;
	cin >> n >> m;
	if ((n & 1) == (m & 1)) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}

/*Determine if the houses with numbers n and m are located on one side of the street.*/