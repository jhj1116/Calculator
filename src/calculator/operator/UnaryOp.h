#pragma once
#ifndef UNARYOP_H
#define UNARYOP_H

#include "../operand/RawElement.h"
#include "./Op.h"
#include <string>

class UnaryOp :public Op{
	public:
		UnaryOp();
		virtual RawElement calculate(RawElement e);
		virtual int getPriority();
		virtual std::string getType();
};

#endif
