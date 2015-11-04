#pragma once
#include "IntegerNumber.h"

class Calculater
{
public:
	Calculater();
	IntegerNumber add(IntegerNumber integerA, IntegerNumber integerB);
	IntegerNumber subtract(IntegerNumber integerA, IntegerNumber integerB);
	IntegerNumber multiply(IntegerNumber integerA, IntegerNumber integerB);
	IntegerNumber divide(IntegerNumber integerA, IntegerNumber integerB);
	~Calculater();
};

