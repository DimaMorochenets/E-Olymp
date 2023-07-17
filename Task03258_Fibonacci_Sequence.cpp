#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

typedef vector<vector<uint32_t>> matrix;

matrix Mat_Degree(matrix, matrix, size_t, uint32_t);
matrix Mat_Mult(matrix, matrix, size_t);

int main()
{
	uint32_t n;
	cin >> n;

	matrix N(2, vector<uint32_t>(2, 0));
	N[0][0] = 1; N[0][1] = 1; N[1][0] = 1;

	N = Mat_Degree(N, N, 2, n);

	cout << N[0][1];

	return 0;
}
matrix Mat_Degree(matrix N, matrix Basic, size_t n, uint32_t degree)
{
	if (degree == 1) return N;
	return Mat_Degree(Mat_Mult(N, Basic, n), Basic, n, degree - 1);
}
matrix Mat_Mult(matrix A, matrix B, size_t n)
{
	matrix Temp(n, vector<uint32_t>(n, 0));
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
			for (size_t k = 0; k < n; k++)
				Temp[i][j] += A[i][k] * B[k][j];
	return Temp;
}

/*The Fibonacci sequence is defined as follows:

a0 = 0
a1 = 1
ak = ak-1 + ak-2

For a given value of n find the n-th element of Fibonacci sequence.*/