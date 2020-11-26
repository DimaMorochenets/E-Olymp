#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 4) cout << "Initial" << endl;
	else if (n < 7) cout << "Average" << endl;
	else if (n < 10)cout << "Sufficient" << endl;
	else cout << "High" << endl;
	
	return 0;
}

/*Determine the level of educational achievements for the pupil (elementary, average, sufficient, high) 
according to the given grade (from 1 to 12).
Print Initial for elementary level (grade from 1 to 3), 
Average for average level (grade from 4 to 6), 
Sufficient for sufficient level (grade from 7 to 9) 
and High for high level (grade from 10 to 12).*/