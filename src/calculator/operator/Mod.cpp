#include "./Mod.h"
#include <string>
#include "../operand/FloatElement.h"
#include "../operand/IntElement.h"

Mod::Mod(){
	unitType="Mod";
	priority=13;
}

RawElement Mod::calculate(RawElement e1, RawElement e2){
	if(e1.getType()=="float"||e2.getType()=="float")
		return FloatElement((int)e1.getValue()%(int)e2.getValue());
	else
		return IntElement((int)e1.getValue()%(int)e2.getValue());
}

int Mod::getPriority(){
	return priority;
}

std::string Mod::getType(){
	return unitType;
}
