#include "SymbolValidator.h"

void SymbolValidator::AssertCorrectSymbol(string value)
{
	const int size = 11;
	char incorrectSymbols[size] = { '{', '}', '<', '>',
		'@', '#', '$', '%', '*', ':', '^' };

	for (int i = 0; i < value.length(); i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (value[i] == incorrectSymbols[j])
			{
				throw InCorrectSymbol();
			}
		}
	}
}