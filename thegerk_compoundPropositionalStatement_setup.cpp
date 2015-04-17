#include 'thegerk_compoundPropositionalStatement.cpp'
#include 'thegerk.h'
using namespace std;
void compoundPropositionalStatement::setup()
{
	expr.setup(getUsableString(), variables);																//Error maybe?
	//If above code is unacceptable then use code bellow although it will be signifigantly worse
	// string a = getUsableString();
	// expr.setup(getUsableString(), variables);
}
