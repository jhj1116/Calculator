#pragma once
#ifndef PLUS_H
#define PLUS_H

#include <string>
#include "../operand/RawElement.h"
#include "./BinaryOp.h"

class Plus: public BinaryOp{
	public:
	Plus();
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
};

#endif
