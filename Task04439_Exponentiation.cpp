#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

long long Degree(long long, long long);

int main() 
{
	long long a, b;
	cin >> a >> b;

	cout << Degree(a, b);

	return 0;
}

long long Degree(long long a, long long b)
{
	if (a == 1) return 1;
	return !b ? 1 : a * Degree(a, b - 1);
}

/*Find the value of x^n.*/