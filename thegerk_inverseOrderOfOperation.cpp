#include 'thegerk.h'

//order of operations (left to right default)
//1st:
//	!
//2nd:
//	^
//2rd:
//	&
//3rd:
//	|
//4th:
//	>
//	<
//	=


unsigned int inverseOrderOfOperation(const char& Operator)
{
	if(Operator == NOT())
		return 4;
	else if(Operator == XOR())
		return 3;
	else if(Operator == AND())
		return 3;
	esle if(Operator == OR())
		return 2;
	else if(Operator == IMPLIES() ||
			Operator == IMPLIED_BY() ||
			Operator == BICONDITIONAL())
		return 1;
	else
		return 0;
}
