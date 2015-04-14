#include 'thegerk.h'
#include <iostream>
using namespace std;
void pause()
{
	char p;
	cout << "Please input a character to continue:";
	do
	{
		cin >> p;
		if(!(cin << ignore))
		{
			cin.clear();
			cout << "That is not a valid input"
		}
		cin.ignore(10000, '\n');
	}
}