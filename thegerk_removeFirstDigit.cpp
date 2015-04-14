#include 'thegerk.h'
#include <cmath>
using namespace std;

char removeFirstDidget(int& input)
{
	int digets = pow(10, floor(log10(input)));
	int output = input / digets;
	input -= output * digets;
	return (char)output + 48;
}
