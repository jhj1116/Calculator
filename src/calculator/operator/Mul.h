#pragma once
#ifndef MUL_H
#define MUL_H

#include "../operand/RawElement.h"
#include "./BinaryOp.h"
#include <string>

class Mul: public BinaryOp{
	public:
	Mul();
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
};

#endif
