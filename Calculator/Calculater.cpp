#include "Calculater.h"


Calculater::Calculater()
{
}

IntegerNumber Calculater::add(IntegerNumber integerA, IntegerNumber integerB)
{
	IntegerNumber result = IntegerNumber();
	result.value = integerA.value + integerB.value;
	return result;
}
IntegerNumber Calculater::subtract(IntegerNumber integerA, IntegerNumber integerB)
{
	IntegerNumber result = IntegerNumber();
	result.value = integerA.value - integerB.value;
	return result;
}
IntegerNumber Calculater::multiply(IntegerNumber integerA, IntegerNumber integerB)
{
	IntegerNumber result = IntegerNumber();
	result.value = integerA.value * integerB.value;
	return result;
}
IntegerNumber Calculater::divide(IntegerNumber integerA, IntegerNumber integerB)
{
	IntegerNumber result = IntegerNumber();
	result.value = integerA.value / integerB.value;
	return result;
}

Calculater::~Calculater()
{
}
