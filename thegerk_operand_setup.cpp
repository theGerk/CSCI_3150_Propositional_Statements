#include 'thegerk.h'
#include <cstring>
#include <iostream>

//operators
#define NOT '!'
#define AND '&'
#define OR '|'
#define IMPLIES '>'
#define IMPLIED_BY '<'
#define BICONDITINAL '='
#define XOR '~'
#define START_PARA '('
#define END_PARA ')'

//constants
#define S_TRUE '1'
#define S_FALSE '0'
#define TRUE_CHARACTER 		//this will be determined later
#define FALSE_CHARACTER 	//this will be determined later

void operand::setup(string input, const vector<variable> vars)
{
	clean(input);


	//find which type of operator to set
	//check for constant
	switch(input[0])
	{
		//empty
		case: NULL
			cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
			cout << "The string, which is empty is: " << input << endl;
			cout << "This should only happen if there is a unary operator! Otherwise a bug exists." << endl;
			pause();
			break;

		//constants
		case: TRUE_CHARACTER
		case: FALSE_CHARACTER
			switch(input.length())
			{
				//constant
				case: 1
					constant = (input[0] == FALSE_CHARACTER) ? false : true;
					break;
				//expression
				default:
				
					cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
					cout << "The string, which still has at least 1 epsression is: " << input << endl;
					cout << "If there is more then one expression then a bug exists." << endl;
					pause();
					expr.setup(input, vars);
					break;
			}
			break;

		//variables
		case: '0'
		case: '1'
		case: '2'
		case: '3'
		case: '4'
		case: '5'
		case: '6'
		case: '7'
		case: '8'
		case: '9'
			switch(input.length())
			{
				//variable
				case: getLengthOfInt(input)
					cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
					cout << "The string, which is only a number: " << input << endl;
					cout << "If there is anything other then a number in the string you have a bug." << endl;\
					pause();
					var = &(vars[getInt(input)]);
					break;
				//expression
				default:
					cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
					cout << "The string, which still has at least 1 epsression is: " << input << endl;
					cout << "If there is more then one expression then a bug exists." << endl;
					pause();
					expr.setup(input, vars);
					break;
			}
		
		//unary operators
		default:
			cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
			cout << "The string, which starts with a unary operator: " << input << endl;
			cout << "If it is not starting with a unary operator you have a bug." << endl;
			pause()
			expr.setup(input, vars);
			break;
	}
}