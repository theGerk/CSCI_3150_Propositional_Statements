//Project: CSCI_3150_Propositional_Statements
//contributions by theGerk

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class propositionalVariable
{
	public:
		char visibleName;	//will hold a letter (capital or lowercase)
		bool hasNumber;		//indicates whether or not there is a number attached
		int number;			//the attached number, will be ignored if hasNumber == false
		bool value;			//value held by the variable
};

class compoundPropositionalStatement
{
	private:
		vector<propositionalVariable> variables;	//this is all the variables in the statement
		string statementPrintout;
	public:
		compoundPropositionalStatement(string);
		//takes an input as a string and stores it
};
