#include "./Minus.h"
#include <string>
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"

Minus::Minus(){
	unitType = "Minus";
	priority = 13;
}


RawElement Minus::calculate(RawElement e1, RawElement e2){
	if(e1.getType()=="float"||e2.getType()=="float")
		return FloatElement(e1.getValue()-e2.getValue());
	else
		return IntElement((int)e1.getValue()-(int)e2.getValue());
}

int Minus::getPriority(){
	return priority;
}

std::string Minus::getType(){
	return unitType;
}
