#include <iostream>
#include <string>
#include <vector>
#include <cmath>

std::vector<uint32_t> primary_number;

void fillArray(uint32_t left, uint32_t right);
bool isPrimaryNumber(uint32_t number);

int main()
{
	uint32_t pasangers;
	std::string ticket_number;
	uint32_t numbersCount;
	uint32_t number;
	uint32_t pasangersCount;

	std::cin >> pasangers >> ticket_number;
	numbersCount = ticket_number.size();
	number = atol(ticket_number.c_str());

	fillArray(0, pow(10, numbersCount) - 1);

	uint32_t i;
	for(i = 0; i < primary_number.size(); i++)
		if(primary_number[i] == number)
			break;

	if(i >= primary_number.size() - 1)
		std::cout << -1;
	else if(primary_number[i + 1] - primary_number[i] > pasangers - 1)
		std::cout << -1;
	else 
		std::cout << primary_number[i + 1] - primary_number[i] - 1;

	return 0;
}

void fillArray(uint32_t left, uint32_t right)
{
	for(uint32_t i = left; i <= right; i++) 
		if(isPrimaryNumber(i))
			primary_number.push_back(i);
}

bool isPrimaryNumber(uint32_t number)
{
	if(number < 2)
		return false;

	if(number == 2 || number == 3)
		return true;

	if(!(number % 2) || !(number % 3))
		return false;

	for(uint32_t i = 5; i * i <= number; i += 6)
		if(!(number % i) || !(number % (i + 2)))
			return false;

	return true;
}

/*On the stop we have N passengers, which Vanja and Peter were among, called at a trolleybus. 
The Vanja purchased a ticket the first. 
Peter glanced on the ticket and saw that the number of ticket is a prime number, 
and decided, that he must purchase a ticket with a simple number. 
Whether there is a chance at Peter to purchase a ticket to a next stop, 
if at a conductor only one roll of tickets, 
in the numbers of tickets is determined the amount by the bought ticket. 
In case if a roll is closed, Peter will stow "away", and he is expected by a failure.

An entrance line contains two numbers: amount of passengers and number of trolleybus ticket. 
The amount of numbers in the number of ticket does not exceed 6.
*/