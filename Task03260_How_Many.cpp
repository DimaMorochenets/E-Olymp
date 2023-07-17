#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int Factorial(int);

int main() 
{
	int n, m;
	cin >> n >> m;

	cout << Factorial(n) / (Factorial(m) * Factorial(n - m));

	return 0;
}

int Factorial(int n)
{
	return !n ? 1 : Factorial(n - 1) * n;
}

/*Once preparing for the exam, 
Peter put in front of him n different cheating papers of his "favorite" subject "Calculus".
And as during the semester Peter did not learn properly, 
there were so many cribs that they all can not fit into any pocket. 
Peter then found the maximum number of cribs, 
that he can take with him to the exam, and suddenly thought: 
how many ways are there to choose the right number of cribs?*/