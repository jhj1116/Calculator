#include "./Cos.h"
#include <string>
#include <math.h>
#include "../operand/FloatElement.h"

Cos::Cos(){
	unitType = "Cos";
	priority = 14;
}

RawElement Cos::calculate(RawElement e){
	return FloatElement(cos(e.getValue()));
}

int Cos::getPriority(){
	return priority;
}

std::string Cos::getType(){
	return unitType;
}
