#pragma once
#ifndef MINUS_H
#define MINUS_H

#include "../operand/RawElement.h"
#include "./BinaryOp.h"
#include <string>

class Minus : public BinaryOp{
	public:
	Minus();
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
};

#endif
