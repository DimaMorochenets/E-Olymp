#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int f_10(int, int);

int main() 
{
	int n, m;
	cin >> n >> m;

	cout << f_10(m, n);

	return 0;
}
int f_10(int m, int n)
{
	if (!m) return 1;
	if (m == n) return 1;
	if (m > 0 && n > m) 
		return f_10(m - 1, n - 1) + f_10(m, n - 1);
}

/*The function is given with nonnegative integer arguments m and n (m ≤ n):

          | 1, if m = 0
f(m, n) = | 1, if m = n
          | f(m - 1, n - 1) + f(m, n - 1), if 0 < m < n

Find the value of the function.
Two nonnegative integers n and m (0 ≤ n, m ≤ 20).*/