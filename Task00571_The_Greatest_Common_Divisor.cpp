#include <iostream>

int GCD(int, int);

int  main()
{
	size_t n;
	std::cin >> n;
	int res;
	int temp;

	std::cin >> res; n--;
	while (n-- && std::cin >> temp)
		res = GCD(res, temp);

	std::cout << res << std::endl;

	return 0;
}
int GCD(int a, int b)
{
	if (!a) return b;	//перший параметр 0
	if (!b) return a;	//другий параметр 0
	if (a == b) return a;//параметри рівні
	if (a == 1 || b == 1) return 1;	//один з параметрів 1
	if (!(a & 1) && !(b & 1)) //обидва параметри парні
		return GCD(a >> 1, b >> 1) << 1;
	if (!(a & 1) && (b & 1))  //другий параметр не парний
		return GCD(a >> 1, b);
	if ((a & 1) && !(b & 1))  //перший параметр не парний
		return GCD(a, b >> 1);
	if (a < b) return GCD((b - a) >> 1, a);
	return GCD((a - b) >> 1, b);
}

/*n natural numbers are given. 
Write a program that calculates the greatest common divisor of these numbers.*/