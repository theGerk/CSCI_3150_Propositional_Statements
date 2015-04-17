#include 'thegerk_compoundPropositionalStatement.cpp'
#include 'thegerk.h'
#include <cstring>
#include <vector>

int compoundPropositionalStatement::findvar(int locationInStatmentString) const
{
	//build temp string (variableName)
	string temp;
	string temp = statementString[locationInStatmentString];
	locationInStatmentString++;
	while(isNumber(statementString[locationInStatmentString]) || isBlankSpace(statementString[locationInStatmentString]))
	{
		if(isNumber(statementString[locationInStatmentString]))
			temp+=statementString[locationInStatmentString]
	}

	//find it	
	for(int i = 0; i < variables.size(); i++)
		if(variables[i].variableName == temp)
			return i;
	return -1;
}