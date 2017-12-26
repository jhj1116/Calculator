#ifndef DIV_H
#define DIV_H

#include "../operand/RawElement.h"
#include "./BinaryOp.h"
#include <string>

class Div:public BinaryOp{
	public:
	Div();
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
};

#endif
