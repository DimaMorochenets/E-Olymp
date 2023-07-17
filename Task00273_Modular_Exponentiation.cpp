#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

uint32_t Degree_Mod(uint32_t, uint32_t, uint32_t, uint32_t);

int main()
{
	uint32_t a, b, m;
	cin >> a >> b >> m;

	cout << Degree_Mod(a % m, a, b, m);

	return 0;
}
uint32_t Degree_Mod(uint32_t rez, uint32_t a, uint32_t b, uint32_t m)
{
	if (b == 1) return rez;
	return Degree_Mod((rez*a) % m, a, b - 1, m);
}

/*Three positive integers x, n and m are given. Find the value of x^n mod m.*/