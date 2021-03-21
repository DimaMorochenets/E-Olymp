#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;

vector<int16_t> Add(vector<int16_t>&, vector<int16_t>&);
vector<int16_t> Sub(vector<int16_t>&, vector<int16_t>&);
int16_t Comparison(const vector<int16_t>&, const vector<int16_t>&);

int main()
{
	size_t n;
	std::cin >> n;

	vector<vector<int16_t>> res;
	std::string temp;

	while (n-- && std::cin >> temp)
	{
		vector<int16_t> A;
		vector<int16_t> B;
		char operation = '\0';
		bool flag = true;

		for (const auto &i : temp)
		{
			if (i == '+' || i == '-')
			{
				flag = false;
				operation = i;
				continue;
			}
			if (flag) A.push_back(i - 48);
			else B.push_back(i - 48);
		}

		if (operation == '+') 
			switch (Comparison(A, B))
			{
			case 1: res.push_back(Add(A, B));
				break;
			default: res.push_back(Add(B, A));
				break;
			}
		else
			switch (Comparison(A, B))
			{
			case 1: res.push_back(Sub(A, B));
				break;
			case 2: res.push_back(Sub(B, A));
				res.back()[0] *= -1;
				break;
			default: res.push_back({ 0 });
				break;
			}
	}

	for (auto &i : res)
	{
		for (auto &j : i) std::cout << j;
		std::cout << std::endl;
	}

	getchar();
	getchar();
	return 0;
}
int16_t Comparison(const vector<int16_t>& A, const vector<int16_t>& B)
{
	if (A.size() > B.size()) return 1;
	if (A.size() < B.size()) return 2;

	for (int i = (int)A.size() - 1; i >= 0; i--)
	{
		if (A[i] > B[i]) return 1;
		if (A[i] < B[i]) return 2;
	}

	return 3;
}
vector<int16_t> Add(vector<int16_t>& A, vector<int16_t>& B)
{
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	for (size_t i = 0; i < B.size(); i++)
		A[i] += B[i];

	for (size_t i = 0; i < A.size() - 1; i++)
		if (A[i] >= 10) { A[i] -= 10; A[i + 1]++; }

	if (*(A.end() - 1) >= 10) { *(A.end() - 1) -= 10; A.push_back(1); }

	reverse(A.begin(), A.end());

	return A;
}
vector<int16_t> Sub(vector<int16_t>& A, vector<int16_t>& B)
{
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	for (size_t i = 0; i < B.size(); i++)
		A[i] -= B[i];

	for (size_t i = 0; i < A.size() - 1; i++)
		if (A[i] < 0) { A[i] += 10; A[i + 1]--; }

	while(!A.empty() && !A.back()) A.pop_back();

	reverse(A.begin(), A.end());

	return A;
}

/*Find the sum of 2 positive integers A and B.
  The first line specifies the number of specified examples N, 
  followed by N lines in the format A + B, 
  where A and B - 2 specified natural numbers, 
  and between them without spaces the symbol 
  of the operation "+" or the operation "-".*/