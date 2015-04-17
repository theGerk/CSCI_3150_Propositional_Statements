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
			string temp;
			string temp = statementString[i];
			i++;
			while(isNumber(statementString[i]) || isBlankSpace(statementString[i]))
			{
				if(isNumber(statementString[i]))
					temp+=statementString[i]
			}
			i--;
			variables.resize(variables.size()+1);
			variables[variables.size()-1].variableName = temp;
		}
	}
}
