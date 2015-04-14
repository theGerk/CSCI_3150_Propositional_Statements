#include 'thegerk.h'

//namespace declaration
using namespace std;

//operators
#define NOT '!'
#define AND '&'
#define OR '|'
#define IMPLIES '>'
#define IMPLIED_BY '<'
#define BICONDITINAL '='
#define XOR '~'
#define START_PARA '('
#define END_PARA ')'

//constants
#define S_TRUE '1'
#define S_FALSE '0'
#define TRUE_CHARACTER 		//this will be determined later
#define FALSE_CHARACTER 	//this will be determined later

bool isUnary(char Operator)
{
	switch(Operator)
	{
		case: NOT
			return true;
		default:
			return false;
	}
}