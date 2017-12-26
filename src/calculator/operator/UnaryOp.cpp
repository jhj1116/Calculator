#include "./UnaryOp.h"
#include <string>
#include "../operand/RawElement.h"

UnaryOp::UnaryOp(){}

RawElement UnaryOp::calculate(RawElement e){
	RawElement tmp;
	return tmp;
}

int UnaryOp::getPriority(){
	return priority;
}

std::string UnaryOp::getType(){
	return unitType;
}
