#include 'thegerk.h'
#include 'thegerk_compoundPropositionalStatement.cpp'
#include <cstring>
using namespace std;

compoundPropositionalStatement::compoundPropositionalStatement(const string& input)
{
	statementString = input;
	format();
	setup();
}
