#include 'thegerk.h'
using namespace std;
class compoundPropositionalStatement
{
	//private member vars
	vector<variable> variables;	//This is all the variables in the statement.
	string statementString;		//The statement saved as a nicely formated string ie: spaces.
	expression expr;			//the last expression to be evaluated in the statement.
	
	//private member functions
	//Benji - Complete
	string getUsableString() const;
	//returns a String.  Using the statementString, replaces any variables with their location in variables written out as the characters of a number
	//the output also has any constants labled in some way to be determined later, when setting them (constants) equal to something use FALSE_CHARACTER or TRUE_CHARACTER
	//also no spaces in the rutrned 

	//Benji - Complete
	void setup();
	//sets up variables and expression expressions for statement

	//not taken
	void format();
	//formats the statementString to look nice

	//Benji
	void setupVars();
	//fills up the "variables" vector using the statementString

	//not taken
	int findvar(int locationInStatmentString) const;
	//finds the specific variable in the vector and returns its location in said vector

	public:
		//public member functions
		//Benji - Complete
		compoundPropositionalStatement(const string& input);	//CONSTRUcTOR
		//takes an input as a string and stores it nicely

		//THESE NEXT THREE FUNCTIONS SHOULD ALL CALL ANOTHER FUNCTION AND THEY JUST SET UP THAT FUNCTION CORRECTLY
		//not taken
		void printTruthTableConsole() const;
		//prints truth table to console

		//not taken
		void printTruthTableFile(stirng fileName) const;
		//prints truth table to a file

		//not taken
		void appendTruthTableFile(string fileName) const;
		//appends truth table to a file

		//not taken
		void save() const;
		//prompts the user for the file it should be saved to and then appends string to that file
};