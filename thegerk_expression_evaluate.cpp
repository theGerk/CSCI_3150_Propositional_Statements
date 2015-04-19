#include 'thegerk.h'
#include 'thegerk_expression.cpp'
#include 'thegerk_operand.cpp'

bool expression::evaluate() const
{
	if(Operator == AND())
		return left.getValue() && right.getValue();
	else if(Operator == OR())
		return left.getValue() || right.getValue();
	else if(Operator == XOR())
		return left.getValue() ^ right.getValue();
	else if(Operator == NOT())
		return !right.getValue();
	else if(Operator == BICONDITIONAL())
		return !(left.getValue() ^ right.getValue());
	else if(Operator == IMPLIES())
		return  !left.getValue() || right.getValue();
	else if(Operator == IMPLIED_BY())
		return right.getValue() || !right.getValue();
}