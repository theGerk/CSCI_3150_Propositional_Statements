#include 'thegerk.h'

//operators
#define NOT '!'
#define AND '&'
#define OR '|'
#define IMPLIES '>'
#define IMPLIED_BY '<'
#define BICONDITINAL '='
#define XOR '~'

bool isOperator(const char& input)
{
	switch(input)
	{
		case: NOT
		case: AND
		case: OR
		case: IMPLIES
		case: IMPLIED_BY
		case: BICONDITINAL
		case: XOR
			return true;
		default:
			return false;
	}
}