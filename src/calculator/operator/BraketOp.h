#pragma once
#ifndef BRAKETOP_H
#define BRAKETOP_H

#include <string>
#include "../operand/RawElement.h"
#include "./Op.h"

class BraketOp:public Op{
	public:
	BraketOp();
	BraketOp(std::string str);
	int getPriority();
	std::string getType();
};

#endif
