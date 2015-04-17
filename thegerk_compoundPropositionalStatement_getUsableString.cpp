#include 'thegerk.h'
#include 'thegerk_compoundPropositionalStatement.cpp'
#include <cstring>

std::string compoundPropositionalStatement::getUsableString() const
{
	std::string output;
	for(int i = 0; i < statementString.length(); i++)
	{
		if(isBlankSpace(statementString[i]));

		else if(isOperator(statementString[i]))
			output += statementString[i];

		else if(isLetter(statementString[i]))
		{
				int adress = findvar(i);
				std::string temp = convertToString(adress);
				ouptut += temp;
				do {i++;} while(statementString[i] == ' ' || statementString == '\n' || statementString == '\t' || (statementString >= '0' && statementString <= '9'));
		}

		else if(statementString[i] == S_TRUE())
			output += TRUE_CHARACTER();
		else if(statementString[i] == S_FALSE())
			output += FALSE_CHARACTER();

		else
		{
				std::cout << "Remove me for final program!\nI'm located in: string compoundPropositionalStatement::getUsableString() const" << std::endl;
				std::cout << "There is an illegitamite character or the function is broken, you have a bug." << std::endl;
				std::cout << "The character in question is: " << statementString[i] << std::endl;
				pause();

		}

		//old code below
		/*
		switch(statementString[i])
		{
			//if space then delete
			case: ' '
			case: '/t'
			case: '/n'
				break;

			//if operator then leave alone			ADD NEW OPERATORS IF ANY ARE MADE (extestential and universal may be delt with differently)
			case: NOT
			case: AND
			case: OR
			case: XOR
			case: BICONDITINAL
			case: IMPLIES
			case: IMPLIED_BY
				output += statementString[i];
				break;

			//if constant then change to TRUE_CHARACTER or FALSE_CHARACTER
			case: S_TRUE
				output += TRUE_CHARACTER;
			case: S_FALSE
				output += FALSE_CHARACTER;

			//if a variable then switch to location in variable vector
			case: 'a'
			case: 'b'
			case: 'c'
			case: 'd'
			case: 'e'
			case: 'f'
			case: 'g'
			case: 'h'
			case: 'i'
			case: 'j'
			case: 'k'
			case: 'l'
			case: 'm'
			case: 'n'
			case: 'o'
			case: 'p'
			case: 'q'
			case: 'r'
			case: 's'
			case: 't'
			case: 'u'
			case: 'v'
			case: 'w'
			case: 'x'
			case: 'y'
			case: 'z'
			case: 'A'
			case: 'B'
			case: 'C'
			case: 'D'
			case: 'E'
			case: 'F'
			case: 'G'
			case: 'H'
			case: 'I'
			case: 'J'
			case: 'K'
			case: 'L'
			case: 'M'
			case: 'N'
			case: 'O'
			case: 'P'
			case: 'Q'
			case: 'R'
			case: 'S'
			case: 'T'
			case: 'U'
			case: 'V'
			case: 'W'
			case: 'X'
			case: 'Y'
			case: 'Z'
				int adress = findvar(i);
				string temp = convertToString(adress);
				ouptut += temp;
				do {i++;} while(statementString[i] == ' ' || statementString == '\n' || statementString == '\t' || (statementString >= '0' && statementString <= '9'));
				break;

			//check for error
			default:
				cout << "Remove me for final program!\nI'm located in: string compoundPropositionalStatement::getUsableString() const" << endl;
				cout << "There is an illegitamite character or the function is broken, you have a bug." << endl;
				cout << "The character in question is: " << statementString[i] << endl;
				pause();
		*/
		}
	}
	return output;
}
