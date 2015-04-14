#include 'thegerk.h'
using namespace std;
class operand
{
	//private member variables
	unsigned char varInUse;	//says which member variable is bing used
	// 0 --> expr
	// 1 --> var
	// 2 --> constant

	//ONLY 1 MAY BE USED
	expression expr;
	variable *var;
	bool constant;

	public:
		//public member functions
		//Benji - Complete
		void setup(string input, const vector<variable>& vars);

		//Benji - Complete
		bool getValue() const;
		//evaluates if it is true or false and returns value
};