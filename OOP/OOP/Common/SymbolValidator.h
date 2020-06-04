#pragma once
#include <iostream>
using namespace std;

static class SymbolValidator
{
public:
	static void AssertCorrectSymbol(string value);

	static class InCorrectSymbol {} ;
};

