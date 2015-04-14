#include 'thegerk.h'
#include <cstring>
using namespace std;

string convertToString(int input)
{
	int copy = input;
	string output;
	
	while(input > 0)
	{
		output += (removeFirstDidget(input));
	}

	if((copy / 10) * 10 == copy)
	{
		output += '0';
	}

	return output;
}