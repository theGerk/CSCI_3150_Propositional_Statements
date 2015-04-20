#include 'thegerk.h'
#include 'thegerk_operand.cpp'
#include 'thegerk_expression.cpp'
#include <cstring>
#include <iostream>


void operand::setup(string input, const vector<variable> vars)
{
	clean(input);
	
	
	//constants
	else if(input[0] == TRUE_CHARACTER() || input[0] == FALSE_CHARACTER())
	{
		switch(input.length())
		{
			//constant
			case: 1
				constant = (input[0] == FALSE_CHARACTER()) ? false : true;
				varInUse = 2;
				break;
			
			//expression
			default:
				cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
				cout << "The string, which still has at least 1 epsression is: " << input << endl;
				cout << "If there is more then one expression then a bug exists." << endl;
				pause();
				expr.setup(input, vars);
				varInUse = 0;
				break;
		}
	}
	
	//variables
	else if(isNumber(input[0]))
	{
		//variable
		if(input.length() = getLengthOfInt(input));
		{
			cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
			cout << "The string, which is only a number: " << input << endl;
			cout << "If there is anything other then a number in the string you have a bug." << endl;\
			pause();
			var = &(vars[getInt(input)]);
			varInUse = 1;
		}
		//expression
		else
		{
			cout << "The string, which still has at least 1 epsression is: " << input << endl;
			cout << "If there is more then one expression then a bug exists." << endl;
			pause();
			expr.setup(input, vars);
			varInUse = 0;
		}


	}
	
	//unary operator or a parenthese
	else
	{
		cout << "Remove me for final program!\nI'm located in: void operand::setup(string input, const vector<variable>& vars)" << endl;
		cout << "The string, which starts with a unary operator or parenthese: " << input << endl;
		cout << "If it is not starting with a unary operator or a parenthese you have a bug." << endl;
		pause()
		expr.setup(input, vars);
		varInUse = 0;
	}
	/*
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
	*/
}
