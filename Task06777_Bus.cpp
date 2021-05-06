#include <iostream>
#include <vector>

int main()
{
	size_t test;
	std::vector<uint64_t> res;
	size_t bus_stops;
	std::cin >> test;

	while (test-- && std::cin >> bus_stops) {
		uint64_t count = 0;
		while (bus_stops--) count = (count << 1) + 1;

		res.push_back(count);
	}

	for (const auto &i : res) std::cout << i << std::endl;

	return 0;
}

/*A bus with n passengers opens its door at the bus stop. 
  Exactly half of its passengers and an additional half of a passenger get out. 
  On the next stop, again, half of the passengers plus half of a passenger leave the bus. 
  This goes on for k stops in total. Knowing that the bus leaves the last stop empty, 
  and that no one was hurt during the trip, determine the initial number n of people in the bus*/