#pragma once

class IntegerNumber
{
private:
	int i;

public:
	void setProp(int j) { i = j; }
	int getProp(){ return i; }
	IntegerNumber(){}
	__declspec(property(get = getProp, put = setProp)) int value;

};