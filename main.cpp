//compute truth table with following parameters
//!a is not a
//a & b is a and b
//a | b is a or b
//a > b is a implies b
//a < b is b implies a
//a = b is a biconditional b
//a ~ b is a xor b
//parantheses work as per normal
//spaces will be ignored
//all letters are propositional variables
//propositional variables can also be called by a[n], where n is an interger and a is any letters
//1 is true (unless in [])
//0 is false (unless in [])

//libraries
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

//namespace declaration
using namespace std;

//operators
#define NOT '!'
#define AND '&'
#define OR '|'
#define IMPLIES '>'
#define IMPLIED_BY '<'
#define BICONDITINAL '='
#define XOR '~'
#define SUB_START '['
#define SUB_END ']'
#define START_PARA '('
#define END_PARA ')'

//classes
class propositionalVariable
{
	putlic:
		char visibleName;	//will hold a letter (capital or lowercase)
		bool hasNumber;		//tells if there is a number attached
		int number;			//the attached number, will be ignored if hasNumber == false
		bool value;			//value held by the varible
};

class compoundPropositionalStatement
{
	vector<propositionalVariable> variables;	//this is all the variables in the statement
	string statmentPrintout;
	public:
		compoundPropositionalStatement(string);
		//takes an input as a string and stores it 
};

//function declarations
string getConsoleLine();
//retrieves a line from console and returns it as a string

bool prompt();
//outputs "(Y/N)"
//returns true if user inputs any of the following characters: 1, T, t, y, Y.
//returns false if user inputs any of the following characters: 0, F, f, N, n.
