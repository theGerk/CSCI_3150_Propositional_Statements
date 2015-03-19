#include "notmin.h"

#include <iostream>
using namespace std;

bool prompt()
{
	cout << "(Y/N) ";
	char input;
	while(true) {
		cin >> input;
		switch(input){
		case '1':
		case 'T':
		case 't':
		case 'Y':
		case 'y':
			return true;
		case '0':
		case 'F':
		case 'f':
		case 'N':
		case 'n':
			return false;
		default:
			cout << "Invalid input.\n(Y/N) ";
			cin.clear();
			cin.ignore(10000,'\n');
			break;
		}
	}
}
