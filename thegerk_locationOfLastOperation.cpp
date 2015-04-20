#include 'thegerk.h'
#include <cstring>
#include <vector>

findAllOperatorsOutsideOfParentheses(std::vector<unsigned int> operators, const std::string& statement)
{
	for(unsigned int i = 0; i < statement.length(); i++)
	{
		if(isOperator(statement[i]))
		{
			operators.push_back(i);
		}
		else if(statement[i] == START_PARA)
		{
			for(unsigned int counter = 1; counter > 0; i++)
			{
				if(statement[i] == START_PARA())
					counter++;
				else if(statement[i] == END_PARA())
					counter--;
			}
		}
	}
}

unsigned int locationOfLastOperation(const std::string& statement)
{
	//must be outside parenthesses
	std::vector<unsigned int> operators;
	findAllOperatorsOutsideOfParentheses(operators, statement);
	unsigned int least;
	unsigned int location;
	int i = operator.size() - 1;
	do
	{
		if(least >= inverseOrderOfOperation(statement[operators[i]])
		{
			least = inverseOrderOfOperation(statement[operators[i]])
			location = i;
		}
		i--;
	}while(least > 1 && i >= 0)
	return location;
}
