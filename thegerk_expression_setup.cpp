#include 'thegerk.h'
#include 'thegerk_expression.cpp'
#include 'thegerk_operand.cpp'
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

void expression::setup(const string& input, const vector<variable>& vars)
{
	//Find last oppeartion to do and split apart string around.
	const int seperator = locationOfLastOperation(input);


	//split into substrings and feed to operands
	right.setup(input.substr(seperator + 1, string::npos), vars);
	if(!isUnary(input[separtor]))		//if it is unary don't set up left side
		left.setup(input.substr(0, seperator), vars);
		
	//set up operator
	Operator = input[seperator];

	//look at what is in the left string, is it empty, does it just have parentheses?
	if(isUnary(input[seperator]))
	{
		cout << "Remove me for final program!\nI'm located in: void expression::setup(const string& input, const vector<variable>& vars)" << endl;
		cout << "Full string: \"" << input << '\"' << endl;
		cout << "Left string: \"" << input.substr(0, seperator) << '\"' << endl;
		cout << "Opeartor: " << input[seperator] << endl;
		cout << "Right string: \"" < input.substr(seperator + 1, string::npos) << '\"' << endl;
		pause();
	}
}
