//compute truth table with following parameters
//   !a is negation of a
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
#include <string>
#include <vector>
#include "notmin.h"
#include "thegerk.h"

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

//main function
int main()
{
	cout << "Hello World!\n";
	terminate(0);
}
