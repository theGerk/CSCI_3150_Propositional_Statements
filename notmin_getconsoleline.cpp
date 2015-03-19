#include "notmin.h"

#include <iostream>
#include <string>
using namespace std;

string getConsoleLine()
{
	string line;
	getline(cin,line);
	cin.ignore();
	return line;
}
