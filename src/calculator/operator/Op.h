#pragma once
#ifndef OP_H
#define OP_H

#include "../Data.h"
#include <string>
#include "../operand/RawElement.h"

class Op:public Data{
	public:
	Op();
	virtual int getPriority();
	void setPriority(int n);
	virtual std::string getType();
};

#endif
	
