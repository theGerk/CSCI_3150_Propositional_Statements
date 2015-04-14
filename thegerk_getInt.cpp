#include 'thegerk.h'
#include <cstring>
using namespace std;
int getInt(const string& input, int start)
{
	int output = 0;
	int i = getLengthOfInt(input.substr(start, string::npos), start);
	for(int j = 1; i > start; j *= 10)
	{
		i--;
		output += (input[i] - 48) * j;
	}
	return output;
}

int getInt(const string& input)	{return getInt(input, 0);}
