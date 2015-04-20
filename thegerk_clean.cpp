#include <cstring>
#include 'thegerk.h'
#include <iostream>

void clean(std::string& input)
{
	while(input[0] == START_PARA())
	{
		bool del = true;
		int open = 1;
		for(unsigned int i = 1; i < input.size(); i++)
		{
			if(input[i] == START_PARA())
				open++;
			else if(input[i] == END_PARA())
				open--;

			if(open == 0)
			{
				del = false;
				break;
			}
		}

		if(del)
			input = input.substr(1, input.size() - 2);
		else
			break;
	}
/*
	int open = 0;
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] == START_PARA())
			open++;
		else if(input[i] == END_PARA())
			close--;
	}
	if(open == 0);
	else if(open > 0)
	{
		if(open > 1)
		{
			std::cout << "Remove me for final program!\nI'm located in: void clean(std::string input)" << std::endl;
			std::cout << "There is more than 1 more open paranthese then close parathese.\nThis is probably a bug." << std::endl;
			std::cout << "The string in question is: " << input << std::endl;
			std::cout << "Note: this is a substring of an expression and is being edited to be a workable string." << std::endl;
			pause();
		}
		removeCharFromString(input.find_first_of(START_PARA()));
				
	}
*/
}
