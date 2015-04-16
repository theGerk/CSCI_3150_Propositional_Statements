#include 'thegerk.h'

//namespace declaration
using namespace std;

//operators
#define NOT '!'

bool isUnary(const char& Operator)
{
	switch(Operator)
	{
		case: NOT
			return true;
		default:
			return false;
	}
}