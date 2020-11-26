#include <iostream>

using namespace std;

int main()
{
	int32_t a;
	cin >> a;
	if (a < 0) cout << "Negative" << endl;
	else if (a > 0) cout << "Positive" << endl;
	else cout << "Zero" << endl;

	return 0;
}

/*Given one integer n. 
Print is it positive, negative or equals to 0*/