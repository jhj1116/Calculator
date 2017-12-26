#include "./Sin.h"
#include <string>
#include <math.h>
#include "../operand/FloatElement.h"

Sin::Sin(){
	unitType = "Sin";
	priority = 14;
}

RawElement Sin::calculate(RawElement e){
	return FloatElement(sin(e.getValue()));
}

int Sin::getPriority(){
	return priority;
}

std::string Sin::getType(){
	return unitType;
}
