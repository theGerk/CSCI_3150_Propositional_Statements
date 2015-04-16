//Project: CSCI_3150_Propositional_Statements
//contributions by theGerk

#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

struct variable;										//a variable with a name and value
class operand;											//either a variable or an expression
class expression;										//a simple propositinonal statment with 2 operands and 1 operator
class compoundPropositionalStatement(string intput);	//an entire propositional statment
class operatorType;										//class for operator


int getInt(const &string input, int start);
//uses cstring
//gets an interger out of a string starting from any position

int getInt(const &string input);
//uses cstring
//gets an interger out of a string starting from position 0.

int getLengthOfInt(const string& input, unsigned int start);
//uses cstring
//uses a string and finds the length of a number starting at location start

void pause();
//pauses program, useful for testing code

bool isUnary(char Operator);
//finds if the inputed Operator is unary and returns true if it is
//returns false if it is not

string convertToString(int input);
//takes the interger input and outputs it as a string in base 10

char removeFirstDiget(int& input);
//takes off first diget from input
//returns it as a character (one may add 48 to find the character value)

bool isLetter(const char& input);
//returns true if the character is a letter a-z or A-Z

bool isOperater(const char& input);
//returns true if the character is an operator (one of them used in the program)

bool isNumber(const char& input);
//returns true if the character is a number 0-9

bool isBlankSpace(const char& input);
//returns true if the character is a tab, space, or newline