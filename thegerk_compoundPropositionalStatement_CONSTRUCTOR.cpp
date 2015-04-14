#include 'thegerk.h'
#include <cstring>
using namespace std;

compoundPropositionalStatement::compoundPropositionalStatement(const string& input)
{
	statementString = input;
	format();
	setup();
}