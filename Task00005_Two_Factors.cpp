#include <iostream>

long long Min(int);

int main()
{
	int ways;
	std::cin >> ways;
	
	std::cout << Min(ways);

	return 0;
}

long long Min(int ways)
{
	switch (ways)
	{
		case 1:  return 1;            break;
		case 2:  return 4;            break;
		case 3:  return 12;           break;
		case 4:  return 24;           break;
		case 5:  return 36;           break;
		case 6:  return 60;           break;
		case 7:  return 192;          break;
		case 8:  return 120;          break;
		case 9:  return 180;          break;
		case 10: return 240;          break;
		case 11: return 576;          break;
		case 12: return 360;          break;
		case 13: return 1296;         break;
		case 14: return 900;          break;
		case 15: return 720;          break;
		case 16: return 840;          break;
		case 17: return 9216;         break;
		case 18: return 1260;         break;
		case 19: return 786432;       break;
		case 20: return 1680;         break;
		case 21: return 2880;         break;
		case 22: return 15360;        break;
		case 23: return 3600;         break;
		case 24: return 2520;         break;
		case 25: return 6480;         break;
		case 26: return 61440;        break;
		case 27: return 6300;         break;
		case 28: return 6720;         break;
		case 29: return 2359296;      break;
		case 30: return 5040;         break;
		case 31: return 3221225472;   break;
		case 32: return 7560;         break;
		case 33: return 331776;       break;
		case 34: return 983040;       break;
		case 35: return 37748736;     break;
		case 36: return 10080;        break;
		case 37: return 206158430208; break;
		case 38: return 32400;        break;
		case 39: return 746496;       break;
		case 40: return 15120;        break;
		case 41: return 44100;        break;
		case 42: return 20160;        break;
		case 43: return 5308416;      break;
		case 44: return 107520;       break;
		case 45: return 25200;        break;
		case 47: return 9663676416;   break;
		case 48: return 27720;        break;
		case 49: return 233280;       break;
		case 50: return 45360;        break;
	}

	return 0;
}

/*Find the least number n, that can we represented as a product n = a * b in k (1 ≤ k ≤ 50) ways. 
Products a * b and b * a are the same, all numbers are positive integers.*/