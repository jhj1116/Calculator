#pragma once
#ifndef EXP_H
#define EXP_H

#include "../operand/RawElement.h"
#include "./BinaryOp.h"
#include <string>

class Exp :public BinaryOp{
	public:
		Exp();
		RawElement calculate(RawElement e1, RawElement e2);
		int getPriority();
		std::string getType();
};
#endif
