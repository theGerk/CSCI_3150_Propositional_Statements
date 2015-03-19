#include "notmin.h"

#include <iostream>
#include <cstdlib>
using namespace std;

void terminate(int end)
{
	char dummy;
	cout << "\nInput any character and hit return to terminate." << endl;
	cin >> dummy;
	exit(end);
}
