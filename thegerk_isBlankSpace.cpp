include 'thegerk.h'

bool isBlankSpace(const char& input)
{
	switch(input)
	{
		case: ' '
		case: '\t'
		case: '\n'
			return true;
		default:
			return false;
	}
}