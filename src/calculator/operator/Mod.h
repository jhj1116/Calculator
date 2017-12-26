#pragma once
#ifndef MOD_H
#define MOD_H

#include "../operand/RawElement.h"
#include "./BinaryOp.h"
#include <string>

class Mod:public BinaryOp{
	public:
	Mod();
	RawElement calculate(RawElement e1, RawElement e2);
	int getPriority();
	std::string getType();
};

#endif
