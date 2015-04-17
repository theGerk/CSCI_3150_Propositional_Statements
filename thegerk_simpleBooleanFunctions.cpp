#include 'thegerk.h'

bool isLetter(const char& input)
{
	return ((input >= 'a' && input <= 'z') || (input >= 'A' && input <='Z'));
}

bool isBlankSpace(const char& input)
{
	switch(input)
	{
		case: ' '
		case: '\t'
		case: '\n'
			return true;
		default:
			return false;
	}
}

bool isOperator(const char& input)
{
	return (input == NOT() ||
	   		input == AND() ||
	   		input == OR() ||
	   		input == IMPLIES() ||
	   		input == IMPLIED_BY() ||
	   		input == BICONDiTIONAL() ||
	   		input == XOR())

	/*
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
	*/
}

bool isUnary(const char& Operator)
{
	return (Operator == NOT())
		
	/*
	switch(Operator)
	{
		case: NOT
			return true;
		default:
			return false;
	}
	*/
}

bool isNumber(const char& input)
{
	return (input >= '0' && input <= '9');
}
