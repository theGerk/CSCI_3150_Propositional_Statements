#include 'thegerk.h'
using namespace std;
class expression
{
	//private member vars
	operand left;		//operand evaluated agaisnt the second operand 			Think of as left of the operator
	char Opeartor;		//this is the operator that is applied to the right and left
	operand right;		//operand evaluated against by the first 				Think of as right of the operator
	
	public:
		//public member functions
		//Benji - Complete
		void setup(const string& input, const vector<variable>& vars);
		//sets up the expression (left operator and right)

		//not taken
		bool evaluate() const;
		//evaluaes the expression
};