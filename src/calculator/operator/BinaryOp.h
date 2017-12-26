#pragma once
#ifndef BINARYOP_H
#define BINARYOP_H

#include "../operand/RawElement.h"
#include "./Op.h"
#include <string>

class BinaryOp:public Op{
	public:
	BinaryOp();
	virtual RawElement calculate(RawElement e1, RawElement e2);
	virtual int getPriority();
	virtual std::string getType();
	virtual double getValue();
};

#endif
