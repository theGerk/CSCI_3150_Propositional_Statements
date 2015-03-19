//Project: CSCI_3150_Propositional_Statements
//contributions by Notmin

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool prompt();
//requires iostream
//outputs "(Y/N) " to console, then requests console input
//returns true if user inputs any of the following characters: 1, T, t, y, Y
//returns false if user inputs any of the following characters: 0, F, f, N, n
//trashes invalid input and re-requests console input

string getConsoleLine();
//requires iostream, string
//retrieves a line from console and returns it as a string

void terminate(int end);
//requires iostream, cstdlib
//outputs a line break and "Input any character and hit return to terminate." to console,
//then requests char input, terminating the program upon receiving input
//uses end as return value
