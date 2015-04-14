//Project: CSCI_3150_Propositional_Statements
//contributions by theGerk

#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;


//Complete - Benji
int getInt(const &string input, int start);
//gets an interger out of a string starting from any position

//Complete - Benji
int getInt(const &string input);
//gets an interger out of a string starting from position 0.

//Complete - Benji
int getLengthOfInt(const string& input, unsigned int start);
//uses a string and finds the length of a number starting at location start

//Complete - Benji
void pause();
//pauses program, useful for testing code

//Complete - Benji
bool isUnary(char Operator);
//finds if the inputed Operator is unary and returns true if it is
//returns false if it is not

//Benji - Complete
string convertToString(int input);
//takes the interger input and outputs it as a string in base 10

//Benji - Complete
char removeFirstDiget(int& input);
//takes off first diget from input
//returns it as a character (one may add 48 to find the character value)

