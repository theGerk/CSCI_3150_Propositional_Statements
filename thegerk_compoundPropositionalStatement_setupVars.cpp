#include 'thegerk_compoundPropositionalStatement.cpp'
#include 'thegerk.h'
#include <vector>
#include <cstring>
using namespace std;
void compoundPropositionalStatment::setupVars()
{
	variables.clear();
	for(int i = 0; i < statementString.size(); i++)
	{
		if(isLetter(statementString[i]))
		{
			if(findVar(i) < 0)
			{
				variables.resize(variables.size()+1);
				variables[variables.size()-1].variableName = temp;
			}
		}
	}
}
