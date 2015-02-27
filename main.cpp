//compute truth table with following parameters
//!a    is negation of a
//a & b is a and b
//a | b is a or b
//a > b is a implies b
//a < b is b implies a
//a = b is a biconditional b
//a ~ b is a xor b
//parentheses work as per normal
//spaces will be ignored
//all letters are propositional variables
//propositional variables can also be called by a[n], where n is an integer and a is any letter
//1 is true (unless in [])
//0 is false (unless in [])

//directives
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
#define BIG_MONEY '$'

//classes
class propositionalVariable
{
	public:
		char visibleName;	//will hold a letter (capital or lowercase)
		bool hasNumber;		//tells if there is a number attached
		int number;			//the attached number, will be ignored if hasNumber == false
		bool value;			//value held by the varible
};

class compoundPropositionalStatement
{
	vector<propositionalVariable> variables;	//this is all the variables in the statement
	string statementPrintout;
	public:
		compoundPropositionalStatement(string);
		//takes an input as a string and stores it 
};

//function declarations
string getConsoleLine();
//retrieves a line from console and returns it as a string

bool prompt();
//requires iostream
//outputs "(Y/N) " to console, then requests console input
//returns true if user inputs any of the following characters: 1, T, t, y, Y
//returns false if user inputs any of the following characters: 0, F, f, N, n
//trashes invalid input and re-requests console input

//main function
int main()
{
	cout << "Hello World!\n";
	return 0;
}

//function definitions (move to shared object files)
bool prompt() {
	cout << "(Y/N) ";
	char input;
	while(true) {
		cin >> input;
		switch(input){
		case '1':
		case 'T':
		case 't':
		case 'Y':
		case 'y':
			return true;
		case '0':
		case 'F':
		case 'f':
		case 'N':
		case 'n':
			return false;
		default:
			cout << "Invalid input.\n(Y/N) ";
			cin.clear();
			cin.ignore(10000,'\n');
			break;
		}
	}
}
