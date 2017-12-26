#pragma once
#ifndef SIN_H
#define SIN_H

#include "../operand/RawElement.h"
#include "./UnaryOp.h"
#include <string>

class Sin :public UnaryOp{
	public:
		Sin();
		RawElement calculate(RawElement e);
		int getPriority();
		std::string getType();
};

#endif
