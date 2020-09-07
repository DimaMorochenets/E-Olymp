#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;

vector<uint16_t> Add(vector<uint16_t>&, vector<uint16_t>&);

int main()
{
	size_t n;	
	std::cin >> n;
	vector<vector<uint16_t>> res;	
	std::string temp;	
	while (n-- && std::cin >> temp)
	{
		vector<uint16_t> A;	
		vector<uint16_t> B;	
		bool flag = true;
		for (const auto &i : temp)
		{
			if (i == '+')
			{
				flag = false;
				continue;
			}
			if (flag) A.push_back(i - 48);
			else B.push_back(i - 48);
		}
		if (A.size() > B.size()) res.push_back(Add(A, B));
		else res.push_back(Add(B, A));
	}

	for (const auto &i : res)
	{
		for (const auto &j : i) std::cout << j;
		std::cout << std::endl;
	}

	return 0;
}
vector<uint16_t> Add(vector<uint16_t>& A, vector<uint16_t>& B)
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

/*Find the sum of 2 positive integers A and B.
  The first line specifies the number of specified examples N, 
  followed by N lines in the format A + B, 
  where A and B - 2 specified natural numbers, 
  and between them without spaces the symbol 
  of the addition operation "+".*/