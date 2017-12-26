#include "./Plus.h"
#include <string>
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"

Plus::Plus(){
	unitType="Plus";
	priority = 12;
}

RawElement Plus::calculate(RawElement e1, RawElement e2){
	if(e1.getType()=="float" || e2.getType()=="float")
		return FloatElement(e1.getValue()+e2.getValue());
	else
		return IntElement((int)e1.getValue()+(int)e2.getValue());
	}

int Plus::getPriority(){
	return priority;
}

std::string Plus::getType(){
	return unitType;
}
