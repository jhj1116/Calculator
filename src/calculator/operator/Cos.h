#pragma once
#ifndef COS_H
#define COS_H

#include "../operand/RawElement.h"
#include "./UnaryOp.h"
#include <string>

class Cos :public UnaryOp{
	public:
		Cos();
		RawElement calculate(RawElement e);
		int getPriority();
		std::string getType();
};

#endif
