#include 'thegerk.h'
#include <cstring>
using namespace std;
bool operand::getValue() const
{
	switch(varInUse)
	{
		case: 0
			return expr.evaluate();
		case: 1
			return (*var).value;
		case: 2
			return constant;
	}
}